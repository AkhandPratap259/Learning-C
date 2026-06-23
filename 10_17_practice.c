#include<stdio.h>
struct students
{
    char name[50];
    float mobilenumber[10];
};
int main(){
    int n;
    printf("Enter the number of student:\n");
    scanf("%d",&n);
    struct students s[n+1];
for(int i=0;i<=n;i++){
    printf("Enter the name of student %d:\n",i);
    gets(s[i].name);
    printf("Enter the Mobile of student %d\n",i);
    gets(s[i].mobilenumber);

}
for(int i=1;i<=n;i++){
    printf("Name of student:%s\n",s[i].name);
    printf("Mobile Number of student:%s\n",s[i].mobilenumber);
    }
    FILE *ptr;
    ptr =  fopen("Data3.txt","w");
        fprintf(ptr,"Student Name\t Mobile Number\n");
    for(int i=0;i<n;i++){
        fprintf(ptr,"%s\t  ",s[i+1].name);
        fprintf(ptr,"%s\n\n\n\n\n",s[i+1].mobilenumber);
        
}
printf("Data has been recorded..");
    return 0;
}

