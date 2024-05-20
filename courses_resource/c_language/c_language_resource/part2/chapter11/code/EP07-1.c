/*************************************************************************
	> File Name: EP07-1.c
	> Author: 
	> Mail: 
	> Created Time: 
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define MAX_N 10001

int is_prime(int n) {
    for (int i = 2, I = sqrt(n); i <= I; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

//假设n是合数：n = 1 * n, n = a * b 
//结论： a <= sqrt(n) && b >= sqrt(n) ---> a * b = n
//反证法：a, b <= sqrt(n); a, b >= sqrt(n)

int main() {
    int cnt = 0;
    for (int i = 2; ; i++) {
        if (!is_prime(i)) continue;
        cnt += 1;
        if (cnt == MAX_N) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
