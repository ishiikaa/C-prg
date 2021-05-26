#include <stdio.h>
int main() {
    int matrix1[10][10],n,m,i,j,martrix2[10][10],mat3[10][10];
    printf("Enter the number of the rows in a matrix");
    scanf("%d",&n);
    printf("Enter the number of columns in a matrix");
    scanf("%d.,&m");
    printf("Enter the elements in a matrix");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
}
printf("the matrix is \n");
for(i=0; i<=n; i++)
{
    for(j=0; j<m; j++)
    {
        printf("\n%d", matrix[i][j]);
    }
    printf("\n");
}