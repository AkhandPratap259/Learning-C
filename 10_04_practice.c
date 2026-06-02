#include<stdio.h>
int main(){
    FILE *ptr;
    int a,b,c;
    ptr=fopen("First.txt","r");
    fscanf(ptr,"%d",&a);
    fscanf(ptr,"%d",&b);
    fscanf(ptr,"%d",&c);
    fclose(ptr);
    printf("The value of a is:%d\n",a);
    printf("The value of b is:%d\n",b);
    printf("The value of c is:%d\n",c);
    return 0;
}