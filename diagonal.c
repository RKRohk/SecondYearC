#include<stdio.h>
void diagonal(int n,int a[][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1)
                printf("%d ",a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}
void main(){
    printf("Enter the order of the matrix and enter elements of matrix\n");
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for (int j = 0; j < n; j++)
        {
         scanf("%d",&a[i][j]);   
        }   
    }
    diagonal(n,a);

}