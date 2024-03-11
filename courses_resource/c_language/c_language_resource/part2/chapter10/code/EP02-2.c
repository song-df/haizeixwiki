/*************************************************************************
	> File Name: EP02-2.c
	> Author: 
	> Mail: 
	> Created Time: 
 ************************************************************************/
#include <stdio.h>
#define MAX_N 4000000

int fib[3] = {0, 1, 2};

int main() {
    int n = 2, sum = 2;
    while (fib[n % 3] + fib[(n - 1) % 3] < MAX_N) {
        n += 1;
        fib[n % 3] = fib[(n - 1) % 3] + fib[(n - 2) % 3];
        if (!(fib[n % 3] & 1)) sum += fib[n % 3];
    }
    printf("%d\n", sum);
    return 0;
}
