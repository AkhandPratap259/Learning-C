#include<stdio.h>

int main(){
    int a=343;
    int *i;
    i=&a;
    printf("The address of the variable a is :%d.\n",i);
    printf("The address of the variable a is :%d.\n",&a);
    printf("The value of the variable a is :%u.\n",*i);
    return 0;
}