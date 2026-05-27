
#include<stdio.h>
int sum(int a, int b);
int main(){
    int n;
   

    n=sum(34,57);
    printf("%d",n);
    return 0;
}
int sum (int a, int b){
    int n;
    n=a+b;
    return n;
}