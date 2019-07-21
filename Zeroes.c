#include<stdio.h>
int zeroes(int m,int a[m][m]){
    for (int i = 0, count = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
                if (a[i][j]==0)
                {
                    count++;
                }
                if(a[i][j]==1)
                {
                    count = 0;
                }
                
        }
        printf("The number of zeroes are %d\n",count);
    }
    
}
void main(){
    printf("Enter the order and elements of the array\n");
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            {
            scanf("%d",&a[i][j]);
            }
    zeroes(n,a);



}