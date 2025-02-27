#include <stdio.h>

void decimalToBinary(unsigned int num) {
    int i;
    int bitSize = sizeof(num) * 8; 

    printf("");
    
    
    for (i = bitSize - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
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
