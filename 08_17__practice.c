#include<stdio.h>
void present(char *st,char c);
int main(){
    char c, st[1000];
    printf("Enter your message:\n");
    gets(st);
    printf("Enter the character to know if the character is present or not:\n");
    scanf("%c",&c);
    present(st,c);
    return 0;
}
void present(char *st,char c){
    char *ptr=st;
    int a=0;
    while(*ptr!='\0'){
        if(*ptr==c){
            printf("The character %c is present in the message.",c);
            a++;
            break;
        }
        ptr++;
    }
    if(a==0){
            printf("The character %c is not present in the message.",c);
    }

}