#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter first number:\n");
    scanf("%d",&a);
     printf("Enter second number:\n");
    scanf("%d",&b);
     printf("Enter third number:\n");
    scanf("%d",&c);
     printf("Enter fourth number:\n");
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    {
        printf("The number %d is greatest of all you have entered.\n",a);
    }
    else if (b>a && b>c && b>d)
    {
        printf("The number %d is greatest of all you have entered.\n",b);
    }
   else if (c>a && c>b && c>d)
    {
        printf("The number %d is greatest of all you have entered.\n",c);
    }
    else
    {
        printf("The number %d is greatest of all you have entered.\n",d);
    }
    return 0;
}