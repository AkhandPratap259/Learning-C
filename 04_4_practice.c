#include<stdio.h>

int main(){
    int i=1, n;
    printf("Enter how many first natural numbers you want to know:\n");
    scanf("%d",&n);
    printf("The first %d natural numbers are as follows:\n",n);
    for(i=1; i<=n; i++){
        printf("%d\n",i);
    }
    return 0;
}