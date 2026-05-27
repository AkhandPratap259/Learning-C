#include<stdio.h>

int main(){
    int marks[5];
   int *a;
//    a=&marks[0] ;
a=marks;
   for(int i=0;i<5;i++){
    printf("Enter the marks of student %d\n",i+1);
    scanf("%d",a);
    a++;
   }
   for (int i=0;i<5;i++){
    printf("Marks of student %d is %d\n",i+1,marks[i]);

   }
        return 0;
}