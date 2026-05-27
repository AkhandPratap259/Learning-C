#include<stdio.h>

int main() {
    int n_students, n_subjects;
    int arr[n_students][n_subjects];
        float sum = 0;
    printf("Enter the number of students:\n");
    scanf("%d", &n_students);
    printf("Enter the number of subjects:\n");
    scanf("%d", &n_subjects);
    for (int i = 0;i < n_students;i++) {
        for (int j = 0;j < n_subjects;j++) {
            printf("Enter the marks of student %d in subject %d:\n", i + 1, j + 1);
            scanf("%d", arr[i][j]);
        }
        printf("\n");
    }



    for (int i = 0;i < n_students;i++) {
        for (int j = 0;j < n_subjects;j++) {
            printf("The marks of student %d in subject %d is %d:\n", i + 1, j + 1, arr[i][j]);
            sum = sum + arr[i][j];
        }

        printf("The percentage marks of the student %d is :%f", (float)sum / n_subjects);
        printf("\n");
        printf("\n");
    }
    return 0;
}