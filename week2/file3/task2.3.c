#include<stdio.h>
int main(){

        int N, i, j;
        printf("enter number of lines\n");
        scanf("%d", &N);
		if (N>=1&&N<=20){
        for (i = 1; i <= (4*N - 1); i+=4) {
            for (j = i; j <= i+2; j++) {
                printf("%d ", j);
            }
            printf("PUM\n");
		}
        }

}