#include<stdio.h>

int main(){
    int i,a, factorial=1;
    printf("Enter the value of number whose factorial you want to know :\n");
    scanf("%d",&a);
    // for(i=a;i>=1;i--){
    //    factorial *= i;
    
    // }

    for(i=1;i<=a;i++){
       factorial *= i;
    
    }
    printf("The factorial of %d is %d\n",a,factorial);

    return 0;
}