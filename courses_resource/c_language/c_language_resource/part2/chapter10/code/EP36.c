/*************************************************************************
	> File Name: EP36.c
	> Author: 
	> Mail: 
	> Created Time: 
 ************************************************************************/
#include <stdio.h>
#define MAX_N 1000000

int is_reverse(int n, int base) {
    int x = n, temp = 0;
    while (x) {
        temp = temp * base + x % base;
        x /= base;
    }
    return temp == n;
}

int main() {
    int sum = 0;
    for (int i = 1; i < MAX_N; i++) {
        if (!is_reverse(i, 10) || !is_reverse(i, 2)) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
