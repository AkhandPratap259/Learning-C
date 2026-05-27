// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C
// THE FILE IS CORRUPTED BY ANY MEANS SEE 07 _12_PRACTICE.C




#include<stdio.h>

int main() {
    int n_students, n_subjects, arr[n_students][n_subjects];
    float sum = 0;
    printf("Enter the number of students:\n");
    scanf("%d", &n_students);
    printf("Enter the number of subjects:\n");
    scanf("%d", &n_subjects);
    for (int i = 0;i < n_students;i++) {
        for (int j = 0;j < n_subjects;j++) {
            printf("Enter the marks of student %d in subject %d:\n", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n\n\n\n");
    }
    for (int i = 0;i < n_students;i++) {
        for (int j = 0;j < n_subjects;j++) {
            printf("The marks of student %d in subject %d are %d\n", i + 1, j + 1, arr[i][j]);
            sum = sum + arr[i][j];
        }
         printf("The marks in percentage value is %f", sum / n_subjects);
        sum = 0;
        printf("\n\n\n\n");
    }
    return 0;
}