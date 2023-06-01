#include <stdio.h>
#include <string.h>

int main() {
    int n, m=0, x=1, u=1;
    scanf("%d", &n);
    for (n; n>1; n--) {
        u = x+m;
        m = x;
        x = u;
    }
    printf("%d\n", x);
    return 0;
}