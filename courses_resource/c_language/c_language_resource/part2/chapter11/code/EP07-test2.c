/*************************************************************************
	> File Name: EP07-test2.c
	> Author: 
	> Mail: 
	> Created Time: 
 ************************************************************************/
#include <stdio.h>
#define MAX_N 100

int prime[MAX_N + 5] = {0};
void init_prime() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = 1, I = MAX_N / i; j <= I; j++) {
            prime[i * j] = i;
        }
    }
    return ;
}
//30 --> 2, 3, 5
//2 * 15 --> 30
//3 * 10 --> 30
//5 * 6 --> 30

int main() {
    init_prime();
    for (int i = 2; i <= MAX_N; i++) {
        printf("max(%d) = %d\n", i, prime[i]);
    }
    return 0;
}
