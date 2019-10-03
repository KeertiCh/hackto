#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int m,n,i,j,k,a,b;
	float t;

	float A[100][100];	


	printf("Enter the number of rows : ");

	scanf("%d",&m);

	printf("Enter the number of columns : ");

	scanf("%d",&n);


	for(i=0;i<m;i++)

	{

		for(j=0;j<n;j++)

		{

			printf("Enter the %d,%d element : ",i+1,j+1);

			scanf("%f",&A[i][j]);

		}

	}



	printf("Input Matrix\n");

	for(i=0;i<m;i++)

	{
		for(j=0;j<n;j++)

		{

			printf("%f\t",A[i][j]);

		}

		printf("\n");

	}



	for(k=0;k<m;k++)

	{
			if( (A[k][k]) != 1)

		{

			float temp = A[k][k];

			if(temp == 0)

				continue; 

			for(j=0;j<n;j++)

			{

				A[k][j] = ( (A[k][j]) / temp );

			}

		}

		
		for(i=k+1;i<m;i++)

		{

			t = A[i][k];

			for(j=k;j<n;j++)

				{
				A[i][j] = A[i][j] - ( A[k][j] * t );
				}
		}
}


	printf("Row Echelon form is : \n\n");

		

		for(a=0;a<m;a++)

		{

			for(b=0;b<n;b++)

			{
				if(A[a][b]==-0)
				A[a][b]=0;
             printf("%f\t",A[a][b]);
			}

			printf("\n");

		}

	

	return 0;
	

}
