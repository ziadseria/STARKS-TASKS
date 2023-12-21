#include <stdio.h>

int main() {
	
    int limakWeight, bobWeight;
    scanf("%d %d", &limakWeight, &bobWeight);

    
    int years = 0;

    
    while (limakWeight <= bobWeight) {
        limakWeight *= 3;
        bobWeight *= 2;
        years++;
    }

    printf("%d\n", years);

    return 0;
}
