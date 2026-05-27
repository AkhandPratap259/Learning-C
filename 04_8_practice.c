#include<stdio.h>

int main(){
    int i=0, sum=0;
    while (i<=10){
        sum += i;
        i++;
    }
    
    printf("The sum of first 10 natural numbers is %d",sum);

    return 0;
}