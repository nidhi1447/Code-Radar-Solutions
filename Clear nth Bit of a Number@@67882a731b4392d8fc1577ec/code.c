#include <stdio.h>

int main() {
    int num, n, result;

    
    printf("");
    scanf("%d", &num);
    printf("");
    scanf("%d", &n);
    result = num & ~(1 << n);
    printf("%d", result);

    return 0;
}
