#include<stdio.h>

int main(){
    int a, i=1;
    printf("Enter the value how many first natural numbers you want to print:\n");
    scanf("%d",&a);
     printf("The first %d natural numbers are:\n",a);
    do{
       
        printf("%d\n",i);
        i++;
    }while(i<=a);
    
    return 0;
}