# matrixmul

It was hard to do any sort of research on matrix multiplication (even though it's such a fundamental problem - internet seems to be poluted with unrelevant thinks these days) beyond thinks like that, so I decided to create a learning resource on that topic
```C
for(int i = 0; i < M; i++) {
    for(int j = 0; j < N; j++) {
        int num = 0;
        for(int k = 0; k < M; k++) {
            num += matrix[i][k] * matrix2[k][j];
        }
        ret_mat[i][j] = num;
    }
}
```

### Dot product
c = ABcos => c = A<sup>T</sup>B
```C
int dot_product(int *vec1, int *vec2) {
	int res = 0;
	for(int i = 0; i < VECTOR_SIZE; i++) {
		res += vec1[i] * vec2[i];
	}
	return res;
}
```

### Saxpy
y(i) = ax(i) + y(i)
```C
void saxpy(int *vec1, int *vec2, int a) {
	for(int i = 0; i < VECTOR_SIZE; i++) {
		vec2[i] += a * vec1[i];
	}
}
```

### Gaxpy
y(i) = Ax(i) + y(i)
```C
void gaxpy(int *vec1, int *vec2, int mat[MATRIX_COL][MATRIX_ROW]) {
	for(int i = 0; i < MATRIX_ROW; i++) {
		for(int j = 0; j < MATRIX_COL; j++) {
			vec2[i] += mat[i][j] * vec1[j];
		}
	}
}
```
