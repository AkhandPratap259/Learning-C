#include<stdio.h>
#include<string.h>
 typedef struct use_of_arrow{
    int Roll_number;
    float marks;
    char name[18]; 
}usa;
void  show(usa u){
    printf("Roll number of the student is: %d\n",u.Roll_number);
    printf(" Marks of the student is: %.2f\n",u.marks);
    printf(" Name of the student is: %s\n",u.name);
}

int main(){
    usa u1;
    usa *ptr;
    ptr=&u1;
    ptr->Roll_number= 130005;
    ptr-> marks=95.98;
  strcpy ( (*ptr). name,"Akhand Pratap");
    show(u1);
    return 0;
}