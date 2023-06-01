#include <stdio.h>
#include <string.h>

char* join(char* words[], int n) {
    int len = n-1;
    for(int i=0; i<n; i++)
        len+=sizeof(words[i]);
    char arr[len];
    int x = 0;
    for (int i=0; i<n; i++){
        for (int g=0; g<sizeof(words[i]);g++)
            arr[x] = words[i][g];
            x += 1;
        // arr[x] = " ";
        // x += 1;
    return arr;
    }
}

int main() {
    return 0;
}