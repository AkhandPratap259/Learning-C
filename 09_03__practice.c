#include<stdio.h>
#include<string.h>
struct employee {
    int code;
    float salary;
    char name[20];
    };
int main() {
    struct employee facebook[10];

    facebook[0].code = 100;
    facebook[0].salary = 160.998;
    strcpy(facebook[0].name, "Rinku");

    facebook[1].code = 160;
    facebook[1].salary = 790.998;
    strcpy(facebook[1].name, "Akhand");

    facebook[2].code = 101;
    facebook[2].salary = 130.998;
    strcpy(facebook[2].name, "Rohan");

    printf("%d\n", facebook[0].code);
    printf("%f\n", facebook[0].salary);
    printf("%s\n", facebook[0].name);



    printf("%d\n", facebook[1].code);
    printf("%f\n", facebook[1].salary);
    printf("%s\n", facebook[1].name);




    printf("%d\n", facebook[2].code);
    printf("%f\n", facebook[2].salary);
    printf("%s\n", facebook[2].name);





    return 0;
    }