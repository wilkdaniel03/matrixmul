#include <stdio.h>

#define VECTOR_SIZE 3

void saxpy(int *vec1, int *vec2, int a) {
	for(int i = 0; i < VECTOR_SIZE; i++) {
		vec2[i] += a * vec1[i];
	}
}

void print_vec(int *vec) {
	for(int i = 0; i < VECTOR_SIZE; i++) {
		printf("%d ",vec[i]);
	}
	printf("\n");
}

int main() {
	int vec1[VECTOR_SIZE] = {1,2,3};
	int vec2[VECTOR_SIZE] = {4,5,6};
	int a = 2;
	saxpy(vec1,vec2,a);
	print_vec(vec2);
	return 0;
}
