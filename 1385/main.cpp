#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int i, j, N, u, l, res;
    res = 0;
    scanf("%d", &N);
    u = pow(10, N);
    l = pow(10, N-1);
    for (i=l;i<u;i++) {
        for (j=l;j<u;j++) {
            if ((j%i == 0) && ((int ) (i*pow(10, N)) % j == 0))
                res += 1;
        }
    }
    printf("%d\n", res);
}

