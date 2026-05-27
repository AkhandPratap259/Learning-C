#include<stdio.h>
int main(){
    int arr[10];
    int *ptr=&arr[0];
    ptr=ptr+2;
    if(*ptr==arr[2])
    {
        printf("Both the location are same");
    }
    else
        printf("Both the location are not same");
    
    return 0;
}