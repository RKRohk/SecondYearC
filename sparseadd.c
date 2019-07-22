#include<stdio.h>
void main(){
	int a[6][3] = {{4,2,5},{1,0,17},{2,0,19},{2,1,20},{3,0,30},{3,1,35}};
	int b[3][3] = {{4,2,2},{2,0,20},{3,0,70}};
	int c[4][2];
	for(int i=0;i<6;i++){
		for(int j=0;j<3;j++)
			printf("%d ",a[i][j]);
			printf("\n");
		}
		printf("\n\n");
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)
			printf("%d ",b[i][j]);
			printf("\n");
		}
	for(int i=0;i<6;i++)
		for(int j=0;j<3;j++)
			c[i][j]=0;
	for(int i=0;i<6;i++)
		c[ a[i][0] ][ a[i][1] ] = a[i][2];
	for(int i=0;i<3;i++)
		c[ b[i][0] ][ b[i][1] ] = c[ b[i][0] ][ b[i][1] ] + b[i][2];
	printf("Added Matrix is\n");
	for(int i=0;i<4;i++){
	for(int j=0;j<2;j++)
			printf("%d ",c[i][j]);
	printf("\n");		
	}
}
