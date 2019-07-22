#include<stdio.h>
void main()
{
	int M1[3][3];

	printf("Enter value of M1 matrix\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&M1[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("| %d |",M1[i][j]);
		}
		printf("\n");
	}
	printf("\n");


	int k=1,c=0,S1[4][3];

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if (M1[i][j]!=0)
			c++;
		}
	}

	S1[0][0]=3;
	S1[0][1]=3;
	S1[0][2]=c;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if (M1[i][j]!=0)
			{
				S1[k][0]=i;
				S1[k][1]=j;
				S1[k][2]=M1[i][j];
				k++;
			}
		}

	}

	printf("\n Sparse Matrix 1\n");

	for(int i=0;i<c+1;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("| %d |",S1[i][j]);
		}
		printf("\n");
	}

	printf("\n");


}
