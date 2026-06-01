#include<stdio.h>
 struct complex_number{
    int x;
    int y;
};
  void display(struct complex_number c,int a){ 
    printf("\n\n\n\nThe real part of complex number %d is: %d\n",a, c.x);
    printf("The imaginary part of complex number %d is: %d\n",a, c.y);
   
   a++;
  }
  
int main(){
   int a=1;
   struct complex_number c[5]; 
   for(int i=0;i<5;i++){
    printf("Enter the real part of complex number %d:\n",i+1);
    scanf("%d",&c[i].x);
    printf("Enter the imaginary part of complex number %d:\n",i+1);
    scanf("%d",&c[i].y);
   }
   for (int i=0;i<5;i++){
    display(c[i],i+1);
   }
    return 0;
}
   
   