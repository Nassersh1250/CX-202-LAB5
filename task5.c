#include <stdio.h>


int matmult(int r, int c,  int vector[r],int matrix[r][c]){

	int result[r];
	printf("Matrix = \n");	

	for (int n = 0; n<r; n++){
                for (int m = 0; m<c; m++){
                        printf("%d ",matrix[n][m]);
                                        }
                printf("\n");
        }
	
	printf("Vector = \n");

	printf("\n");
	for (int n = 0; n<r; n++){
                printf("%d\n",vector[n]);
        }








	for (int i = 0; i<r; i++){
		result[i] = 0;
		for (int j = 0; j<c; j++){
			result[i] += matrix[i][j]*vector[i];
		}
	}
	
	printf("Matrix*Vector = \n");

	for (int i = 0; i<r; i++){
		printf("%d\n",result[i]);
	}
	return 0;
}



int main(){
	
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int n = 0;
	printf("input number matrix rows\n");
	scanf("%d",&j);
	printf("input number matrix columns\n");
	scanf("%d",&i);
	printf("input vector rows\n");
	scanf("%d",&k);

	int matr[j][i];
	int vect[j];

	if (i!=k){
		printf("error, matrix columns must be equal to vector rows\n");
		return 0;
	}

	for (int n = 0; n<j; n++){
		for (int m = 0; m<i; m++){
			printf("enter value of element (%d,%d)\n",n+1,m+1);
			scanf("%d",&matr[n][m]);
		}
	}


	for (int n = 0; n<k; n++){
		printf("enter value of vector element %d\n",n+1);
		scanf("%d",&vect[n]);
	}
	

	
	matmult(j,i, vect,matr);
	


	return 0;
}

