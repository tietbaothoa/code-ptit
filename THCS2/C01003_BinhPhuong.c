#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int test;
    scanf("%d",&test);
    while (test--) {
        long long n;
        scanf("%lld", &n);
        printf("%lld", n*n);
        el;
    }
}