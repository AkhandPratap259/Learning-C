#include<stdio.h>
struct employee {
    int code;
    float salary;
    char name[20];
    };
int main() {
    struct employee e1, e2, e3;
    printf("Enter the name of first employee:\n");
    scanf("%s",e1.name);
    printf("Enter the code of first employee:\n");
    scanf("%d", &e1.code);
    printf("Enter the salary of first employee:\n");
    scanf("%f", &e1.salary);




    printf("Enter the name of second employee:\n");
    scanf("%s",e2.name);
    printf("Enter the code of second employee:\n");
    scanf("%d", &e2.code);
    printf("Enter the salary of second employee:\n");
    scanf("%f", &e2.salary);




    printf("Enter the name of third employee:\n");
    scanf("%s",e3.name);
    printf("Enter the code of third employee:\n");
    scanf("%d", &e3.code);
    printf("Enter the salary of third employee:\n");
    scanf("%f", &e3.salary);




    return 0;
    }