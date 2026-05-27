#include<stdio.h>
#include<string.h>
struct employee{
char name[20];
int code;
float salary;
};
int main(){
    struct employee e1;
e1.code=100;
e1.salary=175750.50;
strcpy(e1.name,"Akhand");
printf("%d\n",e1.code);
printf("%.2f\n",e1.salary);
printf("%s\n",e1.name);
    
    
    return 0;
}