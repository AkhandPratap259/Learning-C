#include<stdio.h>
void reverse(int *a, int n){
    int temp;
    for(int i=0;i<(n);i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=a[i]; //[HERE IS THE ERROR]
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
reverse(a,9);
for(int i=0;i<9;i++)
{
    printf("The value of element %d after reverse is:%d\n ",i+1,a[i]);
}
    return 0;
}