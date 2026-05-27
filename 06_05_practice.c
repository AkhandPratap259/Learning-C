#include<stdio.h>
int change (int *i);
int main(){
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    change (&a);
    return 0;
}
int change (int *i)
{
    printf("The value of a after the change is %d:\n",*i *10);
}