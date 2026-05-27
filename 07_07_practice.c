#include<stdio.h>

int main(){
    int a,b,*i,*j;
    i=&a;
    j=&b;
    if(i==j){
        printf("Both are equal\n");
    }
    else 
        printf("Both are not equal\n");
    return 0;
}