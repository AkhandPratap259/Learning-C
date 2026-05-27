#include<stdio.h>
int fib(int a);
int main(){
    int a, b;
    printf("Enter the required term number of the fibonacci series:\n");
    scanf("%d",&a);
    printf("%d",fib( a));
    return 0;
}
int fib (int a){
    if(a==1)
    return 0;
    else if (a==2)
    return 1;
    else
    return (fib(a-1)+fib(a-2));
}