#include<stdio.h>

int main(){
    int i=1, a , factorial=1;
    printf("Enter the value of number whose factorial you want know:\n");
    scanf("%d",&a);
    while(i<=a){
        factorial *= i;
        i++;
    }
    printf("The factorial of %d is %d",a, factorial);

    return 0;
}