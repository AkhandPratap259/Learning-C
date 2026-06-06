#include<stdio.h>
int main() {
    int mat1[3][3], mat2[3][3], mat3[3][3], mat4[3][3];
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            printf("Enter the element %d %d of matrix 1 ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
            }
        }
    printf("\n\n\n\n");

    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            printf("Enter the element %d %d of matrix 2 ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
            }
        }
    int sum = 0;
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            for (int k = 0;k < 3;k++) {
                sum = sum + mat1[i][k] * mat2[k][i];
                }
            mat3[i][j] = sum;
            sum = 0;
            }

        }


    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            mat4[i][j] = mat3[j][i];
            }
        }
    FILE* ptr2;

    ptr2 = fopen("matrix.txt", "w");
    fprintf(ptr2, "Following is the demonstration of multiplication of two matrix A and B with their transpose:\n\n\n\n");
    fprintf(ptr2, "The first matrix A is :\n");
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            fprintf(ptr2, "%d ", mat1[i][j]);
            }
        fprintf(ptr2, "\n");
        }
    fprintf(ptr2, "\n\n\n\n");


    fprintf(ptr2, "The second matrix B is :\n");
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            fprintf(ptr2, "%d ", mat2[i][j]);
            }
        fprintf(ptr2, "\n");
        }
    fprintf(ptr2, "\n\n\n\n");

    fprintf(ptr2, "The multiplication matrix [A]X[B] is :\n");
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            fprintf(ptr2, "%d ", mat3[i][j]);
            }
        fprintf(ptr2, "\n");
        }
    fprintf(ptr2, "\n\n\n\n");

    fprintf(ptr2, "The transpose of multiplication matrix [A]X[B] is :\n");
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            fprintf(ptr2, "%d ", mat4[i][j]);
            }
        fprintf(ptr2, "\n");
        }
    fprintf(ptr2, "\n\n\n\n");



    fclose(ptr2);
    printf("The file has been sucessfully printed.");
    return 0;
    }