#include<stdio.h>
int main(){
    char *ptr="Immediately";
    // *ptr is a pointer which stores the adress of string 
    printf("%s",ptr);
    // %s prints the complete word No need to dereference
    return 0;
}