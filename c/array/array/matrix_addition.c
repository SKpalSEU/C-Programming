#include<stdio.h>
int main()
{
	int mat[3][3]={ 1, 2, 3,
					1, 2, 3,
					1, 2, 3};

	int mat2[3][3]={1, 2, 3,
					1, 2, 3,
					1, 2, 3};

	int i,j,k;

	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",mat[i][j]*mat2[i][j]);
		}
		printf("\n");
	}


}
