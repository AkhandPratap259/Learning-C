#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the number whose multiplication table you want to know :\n");
    scanf("%d",&n);
    printf("The multiplication table of %d is as follows:\n",n);
    for (i=1;i<=10;i++){
        printf("%dx%d=%d\n",n,i,n*i);
    }
    // for (i=1;i<=n;i++){
    //     printf("%dx%d=%d\n",n,i,n*i);
    // }
    return 0;
}