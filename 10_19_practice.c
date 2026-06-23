#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of candidate:\n");
    scanf("%d",&a);
    char s[a][50];
    char t[a][20];
    char p[a][3];
    char c[a][3];
    char m[a][3];
    for(int i=0;i<=a;i++){
        printf("Enter the Name of student %d\n",i);
        gets(s[i]);
        printf("Enter the Mobile number of student %d\n",i);
        gets(t[i]);
        printf("Enter the marks of student %d in Physics:\n",i);
        gets(p[i]);
        printf("Enter the marks of student %d in Chemistry:\n",i);
        gets(c[i]);
        printf("Enter the marks of student %d in Maths:\n",i);
        gets(m[i]);

    }
    
    FILE *ptr;
    ptr=fopen("Data5.txt","w");
    fprintf(ptr,"The Name of %d interested candidate:\n",a);
    for(int i=0;i<a;i++){
        fprintf(ptr,"%d. %s \t||\tMobile No.  %s\t||\tPhysics:%s\t||\tChemistry:%s\t||\tMaths:%s\n",i+1,s[i+1],t[i+1],p[i+1],c[i+1],m[i+1]);
    }
    printf("Data has been recorded......");
    return 0;


}