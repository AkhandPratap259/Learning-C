#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the value how many natural numbers you want to know in reverse order:\n");
    scanf("%d",&n);
    printf("The %d natural numbers in reverse order are as follows:\n",n);

    for(i=n; i>=1; i--)
    printf("%d\n",i);
    return 0;
}