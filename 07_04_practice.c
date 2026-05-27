#include<stdio.h>

int main(){
    int a;
    int *b=&a;
    printf("The value of b is %u\n",b);
    // b++;
    b=b+1;
    printf("The value of b is %u\n",b);
    return 0;
}