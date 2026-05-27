#include<stdio.h>

int main(){
    int a, b;
    int *i, *j;
    i=&a;
    j=&b;
    printf("The value of i is %u\n",i);
    printf("The value of j is %u\n",j);
    int d=j-i;
    printf("Difference between i and j is %d",d);
    return 0;
}