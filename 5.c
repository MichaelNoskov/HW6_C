#include <stdio.h>
#include <string.h>

int ispolnitel(int num){
    int c = num % 10;
    num /= 10;
    int b = num % 10;
    num /= 10;
    int a = num % 10;
    int x = a*b, y = b*c, z;
    if (y < 10)
        z = 10;
    else
        z = 100;
    return x*z+y;
}

int main() {
    int n = 456;
    int a = ispolnitel(n);
    printf("%d\n", a);
    return 0;
}