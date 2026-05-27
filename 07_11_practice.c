#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows of array:\n");
    scanf("%d",&m);
    printf("Enter the number of coloumns of array:\n");
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter the value of element A%d%d:\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
        printf("\n\n\n\n");
    }
    printf("{\n");
    for(int i=0;i<m;i++)
    {
    printf("\t{\t");
        for( int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    printf("}");
    printf("\n");
    }
    printf("}\n");
    return 0;
}