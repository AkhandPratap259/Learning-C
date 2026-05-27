#include<stdio.h>
int main(){
    char st[100];
    printf("Enter the string:\n");
    gets(st);
    char *ptr=st;
    int a=0;
    while(*ptr!='\0'){
        a++;
        ptr++;
    }
    printf("The number of character in the string (including spaces if any) are %d",a);
    return 0;
}