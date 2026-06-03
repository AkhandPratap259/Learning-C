#include<stdio.h>
int main() {
    FILE* ptr1, * ptr2, * ptr3;
    ptr1 = fopen("ch_10_pr_03.txt", "r");
    ptr2 = fopen("ch_10_pr_03_01.txt", "w");
   
    char c = fgetc(ptr1);

    while (c != EOF) {
        fprintf(ptr2, "%c", c);
        c = fgetc(ptr1);
        }
    fclose(ptr1);
    fprintf(ptr2, "\n\n\n\n");
   
    ptr3 = fopen("ch_10_pr_03.txt", "r");
    char d = fgetc(ptr1);
    while (d != EOF) {
        fprintf(ptr2, "%c", d);
        d = fgetc(ptr1);
        }

    fclose(ptr1);
    fclose(ptr2);
    printf("Given task has been successfully completed.");
    return 0;
    }