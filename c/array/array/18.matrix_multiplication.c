#include<stdio.h>
int main()
{
	int mat[3][3]={ 1, 2, 3,
					1, 2, 3,
					1, 2, 3};

	int mat2[3][3]={1, 2, 3,
					1, 2, 3,
					1, 2, 3};

	int i,j,k,sum;

	for(i=0;i<3;i++){

		for(j=0;j<3;j++){

			sum=0;
			for(k=0;k<3;k++){

				sum=sum+(mat[i][k]*mat2[k][j]) ;
			}

				printf("%d ",sum);
		}

	  printf("\n");
	}



}
