#include <stdio.h>

int main() {
    int num1, num2;

    printf("");
    scanf("%d %d", &num1, &num2);

   
    if (num1 != num2) { 
        num1 = num1 ^ num2;
        num2 = num1 ^ num2;
        num1 = num1 ^ num2;
    }

    printf("%d %d", num1, num2);

    return 0;
}
