#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define el printf("\n")

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n+5], b[m+5];
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(int i=0; i<m; i++){
        scanf("%d", &b[i]);
    }
    int k;
    scanf("%d", &k);
    for(int i=0; i<k; i++) printf("%d ", a[i]);
    for(int i=0; i<m; i++) printf("%d ", b[i]);
    for(int i=k; i<n; i++) printf("%d ", a[i]);
}
                                    