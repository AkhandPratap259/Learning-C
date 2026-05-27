#include<stdio.h>

int main(){
int a,b,c;
printf("Enter your marks in first subject:\n");
scanf("%d",&a);

if (a>=33 && a<=100){
    printf("You may pass the exam\n");
    printf("Enter your marks in second subject:\n");
    scanf("%d",&b);
    if (b>=33 && b<=100){
      printf("You may pass the exam\n"); 

      printf("Enter your marks in third subject:\n");
    scanf("%d",&c);
    if (c>=33 && c<=100){
      printf("You may pass the exam\n"); 
      if (((a + b + c) /3) >=40){
        printf(" Congratulations You passed the exam.\n");
      }

      else
      printf("Unfortunately you got failed in the exam.As it requires a total of 40 percent to pass the exam.\n");
    

    } 
    else
    printf("Unfortunately you got failed in the exam.\n");
    }
    else
    printf("Unfortunately you got failed in the exam.\n");
}
else
    printf("Unfortunately you got failed in the exam.\n");

    

    return 0;
}