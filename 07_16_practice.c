#include<stdio.h>
int main(){
    int a,table[10];
    printf("Enter the number to print its table:\n");
    scanf("%d",&a);
    for(int i=0; i<10;i++)
    {
        table[i]=a*(i+1);
    }
    for(int i=0; i<10;i++)
    {
        printf("%dX%d=%d\n",a,i+1,table[i]);

    }
    return 0;
}