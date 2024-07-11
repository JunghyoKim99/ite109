#include <stdio.h>

int count_pairs(int N) {
    int count = 0;
    for (int A = 1; A <= 500; A++) {
        for (int B = 1; B <= A; B++) {
            if ((A * A - B * B) == N) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int N;
    printf("Enter the value of N (1 ≤ N ≤ 1000): ");
    scanf("%d", &N);

    if (N < 1 || N > 1000) {
        printf("N must be between 1 and 1000.\n");
        return 1;
    }

    int result = count_pairs(N);
    printf("The number of pairs (A, B) such that A^2 - B^2 = %d is: %d\n", N, result);

    return 0;
}

