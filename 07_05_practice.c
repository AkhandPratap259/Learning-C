#include<stdio.h>

int main(){
 int a;
int *f;
f=&a;
printf("The value of f is %u\n",f);
f=f-1;    
printf("The value of f is %u\n",f);    
    return 0;
}