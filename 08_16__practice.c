#include<stdio.h>
int occurence(char *st,char c);
int main(){
       char c,st[1000];
       printf("Enter your message :\n");
       gets(st);
       printf("Enter the character whose occurence you want to know:\n");
       scanf("%c",&c);
       int count =occurence (st,c);
       printf("ocurrence of %c = %d times.\n",c,count);
    return 0;
}
int occurence(char *st,char c){
    int count=0;
    char *ptr=st;
    while(*ptr!='\0'){
        if (*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
}