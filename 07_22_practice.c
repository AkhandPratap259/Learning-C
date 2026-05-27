#include<stdio.h>
void multable(int *arr,int num,int tableupto){
    for(int i=0;i<tableupto;i++){
        arr[i]=num*(i+1);
        printf("%dX%d=%d\n",num,i+1,arr[i]);
    }
    printf("\n****************************\n\n\n");
}
int main(){
    int num1,num2,num3,tableupto;
    printf("Enter the first number whose table you want to know:\n");
    scanf("%d",&num1);
    printf("Enter the second number whose table you want to know:\n");
    scanf("%d",&num2);
    printf("Enter the third number whose table you want to know:\n");
    scanf("%d",&num3);
    printf("Enter the number upto which you want multiplication table:\n");
    scanf("%d",&tableupto);
    int arr[3][tableupto];
    multable(arr[0],num1,tableupto);
    multable(arr[1],num2,tableupto);
    multable(arr[2],num3,tableupto);
    return 0;
}