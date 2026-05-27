#include<stdio.h>
int main(){
    int n_students,n_subjects;
printf("Enter the number of students:\n");
scanf("%d",&n_students);
printf("Enter the number of subjects:\n");
scanf("%d",&n_subjects);
    printf("\n\n\n\n");
int arr[n_students][n_subjects];
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
        printf("Enter the marks of student %d in subject %d are %d.\n",i+1,j+1,arr[i][j]);
       sum=sum+arr[i][j];
    }
    
    printf("The percentage score of the student %d is %f.\n\n\n\n",i+1,sum/n_subjects);
    sum=0;
}
    return 0;
}