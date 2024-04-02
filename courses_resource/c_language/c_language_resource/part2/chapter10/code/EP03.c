/*************************************************************************
	> File Name: EP03.c
	> Author: 
	> Mail: 
	> Created Time: 
 ************************************************************************/
#include <stdio.h>
#define MAX_N 600851475143LL

int main() {
    long long ans = 0, i = 2, N = MAX_N;
    while (i * i <= N) {
        if (N % i == 0) ans = i;// ans一定是素数
        while (N % i == 0) N /= i;
        i += 1;
    }
    if (N != 1) ans = N;//这里为什么一定要判断呢
    printf("%lld\n", ans);
    return 0;
}
