#include<stdio.h>
int main(){
    int s[3]={1,3,5,},*ptr;
    ptr=&s[0];
    ptr=s+2;
    printf("%d",*ptr);
    return 0;
}