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
