#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of elements of array:\n");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
    printf("Enter the elements %d of array:\n",i+1);
    scanf("%d",&arr[i]);
    }
    int positive=0;
    for (int i=0;i<a;i++){
        printf("The element %d of the array is:%d\n",i+1,arr[i]);
        if(arr[i]>=0){
            positive=positive+1;
        }

    }
    printf("The total number of positive elements is :%d\n ",positive);
    return 0;
}