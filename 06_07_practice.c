#include<stdio.h>

int main(){
    int i,*ptr,**ptr_ptr;
    printf("Enter the value of number:\n");
    scanf("%d",&i);
    ptr=(&i);
    ptr_ptr=&ptr;

    printf("The value through a pointer to pointer is %d\n",**ptr_ptr);
   
        return 0;
}