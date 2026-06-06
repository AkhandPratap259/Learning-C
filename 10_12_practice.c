#include<stdio.h>
int main() {
    int salary1, salary2;
    char name1[50], name2[50];
    printf("Enter the name of the employee 1 :\n");
    gets(name1);
    printf("Enter the name of the employee 2 :\n");
    gets(name2);
    printf("Enter the salary of the employee 1 :\n");
    scanf("%d", &salary1);
    printf("Enter the salary of the employee 2 :\n");
    scanf("%d", &salary2);
    char* c = name1, * d = name2;
    FILE* ptr;
    ptr = fopen("ch_10_pr_04.txt", "w");
    while (*c != '\0') {
        fprintf(ptr, "%c", *c);
        c++;
        }
    fprintf(ptr, ",%d\n", salary1);

    while (*d != '\0') {
        fprintf(ptr, "%c", *d);
        d++;
        }
    fprintf(ptr, ",%d\n", salary2);
    return 0;
    }