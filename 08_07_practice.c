#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Happy";
    char str2[]="birthday";
    strcpy(str2,str1);
    puts(str2);
    return 0;
}