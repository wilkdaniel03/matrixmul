#include <stdio.h>

#define VECTOR_SIZE 3
#define MATRIX_COL 3
#define MATRIX_ROW 3

void gaxpy(int *vec1, int *vec2, int mat[MATRIX_COL][MATRIX_ROW]) {
	for(int i = 0; i < MATRIX_ROW; i++) {
		for(int j = 0; j < MATRIX_COL; j++) {
			vec2[i] += mat[i][j] * vec1[j];
		}
	}
}

void vec_print(int *vec) {
	for(int i = 0; i < VECTOR_SIZE; i++) {
		printf("%d ",vec[i]);
	}
	printf("\n");
}

int main() {
	int vec1[VECTOR_SIZE] = {1,2,3};
	int vec2[VECTOR_SIZE] = {4,5,6};
	int matrix[MATRIX_COL][MATRIX_ROW] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	gaxpy(vec1,vec2,matrix);
	vec_print(vec2);
	return 0;
}
