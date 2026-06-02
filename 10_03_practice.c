#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr=fopen("First.txt","r");
    fscanf(ptr,"%d",&num);
    printf("This file contains the integral value %d.",num);
    return 0;
}