#include <stdio.h>

int main() {
    int num, position = 0;

    // Taking user input
    printf("");
    scanf("%d", &num);
    }
    while ((num & 1) == 0) {
        num >>= 1;  
        position++;  
    }
    printf("%d", position);

    return 0;
}
