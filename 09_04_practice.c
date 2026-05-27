#include<stdio.h>
struct employee {
    int code;
    float salary;
    char name[20];
    };
int main(){
    struct employee Akhand={100,7529435,"AKHAND"};
    struct employee Rohan={0};

    printf("%d\n", Akhand.code);
    printf("%f\n", Akhand.salary);
    printf("%s\n", Akhand.name);



    printf("%d\n", Rohan.code);
    printf("%f\n", Rohan.salary);
    printf("%s\n", Rohan.name);
    return 0;
}