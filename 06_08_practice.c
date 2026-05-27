#include<stdio.h>
int change (int a){
    int c;
    c=10*(a);

     printf("Number given in function is %d:\n",c);
    return c;
}
int main(){
    int a, c=0;
     printf("Enter the number:\n");
     scanf("%d",&a);
      change(a);
     printf("Number given in main is %d:\n",c);


    return 0;
}