#include<stdio.h>

int main(){
    int i,a;
    printf("Enter the value of number :\n");
    scanf("%d",&a);
    for(i=1; i<=a; i++)
{
    if(i!=5)
    continue;
   
    else 
    printf("YOUR VALUE IS %d.\n",i);
}
    return 0;
}