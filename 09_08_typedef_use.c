#include<stdio.h>
#include<string.h>

typedef struct employee {
    int code;
    float salary;
    char name[20];
    }emp; //alias or nick name of the function
void show( emp e); //use emp instead of struct employee
int main(){
    emp e1;  //use emp instead of struct employee
    e1.code=101;
    e1.salary=101000.567;
    strcpy(e1.name,"Akhand");
    show(e1);
    return 0;
}
void show( emp e){     //use emp instead of struct employee
    printf("code=%d\n",e.code);
    printf("salary=%f\n",e.salary);
    printf("name=%s\n",e.name);
}