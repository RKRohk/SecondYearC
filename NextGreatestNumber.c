#include<stdio.h>
int nge(int arr[],int n){ //NGE Refers to next greatest number and the arguements are array name and capacity respectively
    for(int j=0;j<n;j++){
        int i=j,max,temp;
        max = arr[i];
        temp = arr[i];
        while (i<n)
        {
            if(max<arr[i]){
                max = arr[i];
                break;
            }
            i++;
        }
        if (temp==max)
        {
            printf("%d \t-1 \n",temp);
        }
        else
        {
            printf("%d \t%d\n",temp,max);
        }
        
        
    }

} 
void main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements for the array\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    nge(arr,n);
}