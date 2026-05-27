#include<stdio.h>
int sum(int a);
int main(){
    int a;
    printf("Enter the value of n so to calculate the sum of first n natural numbers.\n");
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}
int sum (int a){
    if(a==1)
    return 1;
    else if(a==2)
    return 3;
    else if(a==3)
    return 6;
    else
    return a+sum(a-1);
}