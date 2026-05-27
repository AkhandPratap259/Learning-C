#include<stdio.h>
void pattern(int a);


int main(){
    int a;
    printf("Enter the value of number of lines of pattern:\n");
    scanf("%d",&a);
    pattern(a);
    return 0;
}
// void pattern(int a){
//     for( int i=a;i>0;i--)
// {
//     for(int c=1;c<=(2*i-1);c++){
//     printf("*");
//     }
//     printf("\n");
// }

// }






void pattern(int a){
    for(int i=(2*a-1);i>0;i--)
   
   {
     printf("*");
   }
   printf("\n");
   
    if(a==1){
        // printf("*");
        return;
    }
    pattern(a-1);
}
