#include <stdio.h>

int main() {
    int N, M;

    while (1) {
       
        scanf("%d %d", &N, &M);

        if (N <= 0 || M <= 0) {
            break;
        }
        
        int sum = 0;
        printf("%d", N);
        sum += N;

        for (int i = N + 1; i <= M; ++i) {
            printf(" %d", i);
            sum += i;
        }
       
        printf(" sum =%d\n", sum);
    }

    return 0;
}
