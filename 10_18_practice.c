#include<stdio.h>
int main(){
    typedef struct classdata{
        char name[50];
        int markphysics;
        char mobilenumber[10];
        int markchemistry;
        int markmathematics;
        int markenglish;
        int markhindi;
    }st;
    int n;
    printf("Enter the number students:\n");
    scanf("%d",&n);
    st no[n] ;
    for(int i=0;i<=n;i++){
    printf("Enter the name of student %d:\n",i);
    gets(no[i].name);
    printf("Enter the mobile number of student %d:\n",i);
    gets(no[i].mobilenumber);

    printf("Enter the marks of student in Physics:\n");
    scanf("%d",no[i].markphysics);
    printf("Enter the marks of student in chemistry:\n");
    scanf("%d",no[i].markchemistry);
    printf("Enter the marks of student in mathematics:\n");
    scanf("%d",no[i].markmathematics);
    printf("Enter the marks of student in hindi:\n");
    scanf("%d",no[i].markhindi);
    printf("Enter the marks of student in english:\n");
    scanf("%d",no[i].markenglish);
}
    FILE *ptr;
    ptr=fopen("Data4.txt","w");
    fprintf(ptr,"Sr.no Student Name\t  Mobile Number\t  Mathematics\t  Physics\t  Chemistry\t  English\t  Hindi\n\n\n");
    for(int i=0;i<n;i++){
    fprintf(ptr,"%d       %s  \t %s  \t %d\t\t %d\t\t  %d\t\t  %d\t\t  %d\t\t  %d",i+1,no[i+1].name,no[i+1].mobilenumber,no[i+1].markmathematics,no[i+1].markphysics,no[i+1].markchemistry,no[i+1].markenglish,no[i+1].markhindi);
    }
    printf("Data has been recorded.");
    return 0;
}