#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[20];
    };
int main() {
    struct employee e1;
    struct employee* ptr;
    ptr = &e1;
    // ptr->code=100; //or
    // ptr->salary=100000.5555;   //or
    // strcpy(ptr->name,"Akhand");//or
    (*ptr).code=100;
    (*ptr).salary=107775.5;   
    strcpy((*ptr).name,"Akhand");



    printf("%d\n", (*ptr).code);
    printf("%f\n", (*ptr).salary);
    printf("%s\n", (*ptr).name);


    return 0;
    }