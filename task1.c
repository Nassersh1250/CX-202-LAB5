#include <stdio.h>


int main(){

	int arr1[4];
	short arr2[4];
	char arr3[4];
	double arr4[4];

	printf("address of int array 1\n");

	for (int i = 0; i<4; i++){

		printf("%p\n",&arr1[i]);
	}

	printf("address of short array 2\n");
	for (int i = 0; i<4; i++){

                printf("%p\n",&arr2[i]);
        }
	printf("address of char array 3\n");
        for (int i = 0; i<4; i++){

                printf("%p\n",&arr3[i]);
        }
	printf("address of double array 4\n");
        for (int i = 0; i<4; i++){

                printf("%p\n",&arr4[i]);
        }


	return 0;
}
