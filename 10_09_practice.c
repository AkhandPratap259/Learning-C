#include<stdio.h>
int main(){
    FILE *ptr;
    int a,b,c;
    ptr=fopen("First.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("The values of a b and c are :%d %d and %d respectively.",a,b,c);
    return 0;
}
