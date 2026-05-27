#include<stdio.h>
#include<string.h>

struct employee {
    int code;
    float salary;
    char name[20];
    };
void show( struct employee e);
int main(){
    struct employee e1;
    e1.code=101;
    e1.salary=101000.567;
    strcpy(e1.name,"Akhand");
    show(e1);
    return 0;
}
void show( struct employee e){
    printf("code=%d\n",e.code);
    printf("salary=%f\n",e.salary);
    printf("name=%s\n",e.name);
}