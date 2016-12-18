#include <stdio.h>
#include <string.h>

int main(void) {
    int i, j, k, N;
    long long res;
    scanf("%d", &N);
    long Q[N+1][N+1];
    memset(Q, 0, sizeof Q);
    for (i=5;i<N+1;i++) {
        if (i%2 == 0) {
            for (j=1; j<i/2; j++) {
                Q[i][j] += 1;
                for (k=j+1; k<(i-1)/2+1 ; k++) {
                    Q[i][j] += Q[i-j][k];
                }
            }
        }else {
             for (j=1; j<i/2+1; j++) {
                Q[i][j] += 1;
                for (k=j+1; k<(i-1)/2 ; k++) {
                    Q[i][j] += Q[i-j][k];
                }
            }
        }
    }
    for (i=0; i<N/2+1; i++){
        res += Q[N][i];
    }
    printf("%lld\n", res);
    return 0;
}
