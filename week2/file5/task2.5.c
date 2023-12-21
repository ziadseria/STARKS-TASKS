#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);

    
    int result = 0;

    
    for (int i = 1; i <= N; ++i) {
        int digitSum = sumOfDigits(i);

       
        if (digitSum >= A && digitSum <= B) {
            result += i;
        }
    }

    
    printf("%d\n", result);

    return 0;
}
