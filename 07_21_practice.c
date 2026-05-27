#include<stdio.h>
void multable(int *arr,int num)
{
for(int i=0;i<10;i++)
{
   arr[i]=num*(i+1);
   printf("%dx%d=%d\n",num,i+1,arr[i]);
}
printf("\n************************************************************\n\n\n");
}
int main(){
    int arr[3][10];
    multable(arr[0],2);
    multable(arr[1],7);
    multable(arr[2],9);
    return 0;
}