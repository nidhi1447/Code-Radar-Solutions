#include <stdio.h>

void decimalToBinary(unsigned int num) {
    int i, started = 0; 

    printf("");
    
   
    for (i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            started = 1; 
        }
        if (started) {
            printf("%d", (num >> i) & 1);
        }
    }

    
    if (!started) {
        printf("0");
    }

    printf("\n");
}

int main() {
    unsigned int num;

    
    printf("");
    scanf("%u", &num);

    
    decimalToBinary(num);

    return 0;
}

