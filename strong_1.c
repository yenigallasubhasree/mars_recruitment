#include <stdio.h>

int countDistinctPrimeFactors(int n) {
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            while (n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        count++;
    }
    return count;
}

int main() {
    int consecutiveCount = 0;
    int currentNumber = 1;
    
    while (consecutiveCount < 4) {
        if (countDistinctPrimeFactors(currentNumber) == 4) {
            consecutiveCount++;
            if (consecutiveCount == 4) {
                printf("The four consecutive integers with four distinct prime factors each are: %d, %d, %d, %d\n", currentNumber - 3, currentNumber - 2, currentNumber - 1, currentNumber);
            }
        } else {
            consecutiveCount = 0;
        }
        currentNumber++;
    }
    
    return 0;
}
