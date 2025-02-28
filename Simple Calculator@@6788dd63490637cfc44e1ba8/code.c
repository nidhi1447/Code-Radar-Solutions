#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("");
    scanf("%d", &num1);  
    printf("");
    scanf("%d", &num2);
    printf("");
    scanf(" %c", &op); 

    if (op == '+') {
        result = num1 + num2;
        printf("%d", result);
    } else if (op == '-') {
        result = num1 - num2;
        printf("%d", result);
    } else if (op == '*') {
        result = num1 * num2;
        printf("%d", result);
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%d", result);
        } else {
            printf("Error");
        }
    } else {
        printf("Error");
    }

    return 0;
}
