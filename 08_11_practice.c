#include<stdio.h>
int strlen(char *st){
    int len=0;
    char * ptr=st;
    while (*ptr!='\0')
    {
    len++; 
    ptr++;
    }
    return len;
    
}
int main(){
    char st[100];
    printf("Enter your name:\n");
    gets(st);
    int l=strlen(st);
    printf("The number of character in the string (including spaces if any) is %d\n",l);
    return 0;
}