#include <stdio.h>

#define VECTOR_SIZE 3

int dot_product(int *vec1, int *vec2) {
	int res = 0;
	for(int i = 0; i < VECTOR_SIZE; i++) {
		res += vec1[i] * vec2[i];
	}
	return res;
}

int main() {
	int vec1[VECTOR_SIZE] = {1,2,3};
	int vec2[VECTOR_SIZE] = {4,5,6};
	printf("Result: %d\n",dot_product(vec1,vec2));
	return 0;
}
