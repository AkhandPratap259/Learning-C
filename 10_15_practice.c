#include<stdio.h>
 typedef   struct students{
        char name[50];
        int marks1;
        int marks2;
        int marks3;
        int marks4;
        int marks5;
        float percentage;
    }st;
   
int main(){
    int n;
   printf("Enter the number of students:\n");
   scanf("%d",&n);
    float c2[n];
    float c1[n];
   st s[5];
   for(int i=0;i<2;i++){
    printf("Enter the name of student:\n");
   scanf("%s",s[i].name);
   
    printf("Enter the marks in Mathematics:\n");
    scanf("%d",s[i].marks1);
    printf("Enter the marks in Physics:\n");
    scanf("%d",s[i].marks2);
    printf("Enter the marks in Chemistry:\n");
    scanf("%d",s[i].marks3);
    printf("Enter the marks in Hindi or Computer(as opted):\n");
    scanf("%d",s[i].marks4);
    printf("Enter the marks in English:\n");
    scanf("%d",s[i].marks5);
    c2 [i]=(s[i].marks1+s[i].marks2+s[i].marks3+s[i].marks4+s[i].marks5)/5;
    c1 [i]=(s[i].marks1+s[i].marks2+s[i].marks3+s[i].marks4+s[i].marks5);
   
   }
   FILE *ptr;
   ptr=fopen("Data2.txt","w");
   fprintf(ptr,"This list contains score of %d students:\n\n\n\n",n);
   fprintf(ptr,"\tStudent Name\t\tMathematics\tPhysics\tChemistry\tHindi(or)Computer\tEnglish\tTotal Marks\tpercentage Marks\n");
   for(int i=0;i<n;i++){
   fprintf(ptr,"%d\t%st\t%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t%d\t\t%f\n",i+1,s[i].name,s[i].marks1,s[i].marks2,s[i].marks3,s[i].marks4,s[i].marks5,c1[i],c2[i]);
    
   }
   printf("Data has been successfully recorded..");

    return 0;
}