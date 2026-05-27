#include<stdio.h>
int main(){
    char str[50];
gets(str);
puts(str);
    char *ptr=str;
ptr="New line";
puts(ptr);
    return 0;
}