#include<stdio.h>

int main(){
    int a; 
    printf("Enter the number that you want to proceed up to 100\n :");
    scanf("%d",&a);
    while (a<100)
    {
        printf("%d\n",a);
        a++;
    }
    return 0;
}