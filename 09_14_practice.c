#include<stdio.h>
typedef struct complex_number{
    int x;
    int y;
}cmp;
int main(){
  cmp c1; 
    printf("Enter the real part of complex number\n");
    scanf("%d",&c1.x);
    printf("Enter the imaginary part of complex number\n");
    scanf("%d",&c1.y);
   
   
   
   
    printf("The real part of complex number is: %d\n",c1.x);
    printf("The imaginary part of complex number is: %d\n",c1.y);
    return 0;
}