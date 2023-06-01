#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (a; a<=b; a++) {
        if (a % d == c) {
            printf("%d ", a);
        }
    }
    return 0;
}