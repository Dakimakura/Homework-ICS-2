#include <stdio.h>

int matrixA[11][11], matrixB[11][11], ret[11][11];
int main() {
    int m = 0;
    while (scanf("%d", &m) != EOF) {
        int i, j, k;
        for (j = 0; j < m; j++) {
            for (k = 0; k < m; k++) {
                scanf("%d", &matrixA[j][k]);
            }
        }
        for (j = 0; j < m; j++) {
            for (k = 0; k < m; k++) {
                scanf("%d", &matrixB[j][k]);
            }
        }

        for (j = 0; j < m; j++) {
            for (k = 0; k < m; k++) {
                for (i = 0; i < m; i++) {
                    ret[j][k] += matrixA[j][i] * matrixB[i][k];
                }
                if (k != 0) printf(" ");
                printf("%d", ret[j][k]);
                ret[j][k] = 0;
            }
            printf("\n");
        }
    }

    return 0;
}