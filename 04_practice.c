#include<stdio.h>

int main(){
    int principal, rate, time;
    
    printf("Enter the value of your Principal amount:\n");
    scanf("%d",&principal);
    printf("Enter the value of rate of Interest:\n");
    scanf("%d",&rate);
    printf("Enter the period of time in years:\n");
    scanf("%d",&time);
int simpleinterest=(principal * rate * time)/100;
    printf("The amount of simple interest you have to pay is %d Rs.\n",simpleinterest);
    return 0;
}