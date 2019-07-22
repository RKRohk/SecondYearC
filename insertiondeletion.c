#include<stdio.h>
int insert(int a[],int n,int index,int element){
	int i=0;
	for(i=n;i>index;i--)
		a[i]=a[i-1];
	a[i]=element;
	return n+1;
}
int delete(int a[],int n,int index){
	for(int i=index; i<n; i++){
		a[i]=a[i+1];
	}
	return n-1;
}
void display(int a[],int n){
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
		printf("\n");
}

void main(){
	printf("Enter the number of elements and elements of the array\n");
	int n;
	scanf("%d",&n);
	int a[50],k,element,m;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter element and position for insertion\n");
		scanf("%d %d",&element,&k);
	n = insert(a,n,k+1,element);
	display(a,n);
	printf("Enter position for deletion\n");
		scanf("%d",&m);
	n = delete(a,n,m+1);
	display(a,n);
}
