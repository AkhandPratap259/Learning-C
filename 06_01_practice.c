#include<stdio.h>

int main(){
    int a=8;
    int *i;
    i=&a;
    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*(&a));
    printf("The value of a is %d\n",*i);
    printf("The value of address of a is %u\n",i);
    printf("The value of address of a is %u\n",&a);
    printf("The value of address of i is %u\n",&i);
    return 0;
}