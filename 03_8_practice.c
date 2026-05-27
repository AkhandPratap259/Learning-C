#include<stdio.h>

int main(){
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if (year%4==0 && year%100==0 && year%400==0)
    {
        printf("The year entered by you is a leap year.\n");
    }
    else if (year%4==0 &&  year%100==0 && year%400!=0)
    {
        printf("The year entered by you is not a leap year.\n");
    }
    else if (year%4==0 )
    {
        printf("The year entered by you is a leap year.\n");
    }
    else
    {
        printf("The year entered by you is not a leap year.\n");
    }
    return 0;
}