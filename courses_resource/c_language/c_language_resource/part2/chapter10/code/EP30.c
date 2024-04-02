/*************************************************************************
	> File Name: EP30.c
	> Author: 
	> Mail: 
	> Created Time: 
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define MAX_N 2177280

int is_val(int n) {
    int x = n, temp = 0;
    while (x) {
        temp += (int)pow(x % 10, 5);
        x /= 10;
    }
    return temp == n;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_val(i)) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
