#include<stdio.h>

int main(){
    int i,n=8 ,sum=0;
    for(i=1;i<=10;i++){


        printf("%dx%d=%d\n",n,i,n*i);



    sum += n*i;
    }
    printf("The sum of table of 8 is %d:\n",sum);
    return 0;
}