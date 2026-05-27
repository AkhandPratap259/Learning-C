#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Happy";
    char str2[]="Happ";
    int l=strcmp(str2,str1);
    printf("%d",l);
    return 0;
}