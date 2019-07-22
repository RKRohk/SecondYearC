#include<stdio.h>
void reverse(int a[],int n){
	int temp;
	for(int i=0,j=n;i<n/2;i++,j--){
		temp = a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
void main(){
	int a[10],b[10],c[10],n1,n2;
	for(int i=0;i<10;i++){
		a[i]=0;
		b[i]=0;
	}
	printf("Enter order of first polynomial and polynomial from highest to lowest order\n");
	scanf("%d",&n1);
	for(int i=n1;i>=0;i--)
		scanf("%d",&a[i]);
	printf("Enter order of second polynomial and polynomial from highest order to lowest order\n");
	scanf("%d",&n2);
	for(int i=n2;i>=0;i--)
		scanf("%d",&b[i]);
	int n = n1>n2? n1 : n2;
	for(int i=n;i>=0;i--){
		printf("%d^%d + ",a[i]+b[i],i);
	}
}
