#include <stdio.h>
#include <string.h>

int sumDigits(int *num){
    int n = 0;
    for (*num; *num>0; *num/=10)
        n += *num % 10;
    return n;
}

int main() {
    int n = 123;
    int a = sumDigits(&n);
    printf("%d\n", a);
    return 0;
}