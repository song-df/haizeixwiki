/*************************************************************************
	> File Name: 14.attribute.c
	> Author: hug
	> Mail: hug@haizeix.com
	> Created Time: 六  1/27 17:17:05 2024
 ************************************************************************/

#include <stdio.h>

int arr[10];

__attribute__((constructor))
void test1() {
    arr[0] = 100;
    return ;
}

__attribute__((constructor))
void test2() {
    arr[1] = 99;
    return ;
}

__attribute__((constructor))
void test3() {
    arr[2] = 10086;
    return ;
}

int main() {
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
