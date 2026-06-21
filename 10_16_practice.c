#include<stdio.h>
int main(){
    int n_students,n_subjects;
printf("Enter the number of students:\n");
scanf("%d",&n_students);
printf("Enter the number of subjects:\n");
scanf("%d",&n_subjects);
    printf("\n\n\n\n");
int arr[n_students][n_subjects];
float marks[n_students][n_subjects] ;
for(int i=0;i<n_students;i++)
{
    for(int j=0;j<n_subjects;j++)
    {
        printf("Enter the marks of student %d in subject %d :\n",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
    printf("\n\n\n\n");
}
float sum=0;
for(int i=0;i<n_students;i++)
{
    for(int j=0;j<n_subjects;j++)
    {
       sum=sum+arr[i][j];
    marks[i][j]=sum;
    }
     sum=0;
}
FILE *ptr;
int d;
ptr=fopen("Data.txt","w");
fprintf(ptr,"This data conatains %d students having %d subjects:\n",n_students,n_subjects);
for(int i=0;i<n_students;i++){
    fprintf(ptr,"Student %d:\n",i+1);
    for(int j=0;j<n_subjects;j++){
        fprintf(ptr,"\t\t\tMarks in subject %d:%d\n",j+1,arr[i][j]);
        d=j;
    }
    fprintf(ptr,"Total score in percentage:%f\n\n\n\n\n",marks[i][d]/n_subjects);
    d=0;
}
printf("Data has been recorded in the file..");
    return 0;
}