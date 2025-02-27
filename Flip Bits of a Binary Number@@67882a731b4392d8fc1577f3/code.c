#include <stdio.h>
#include <stdlib.h>
#include <string.h>


unsigned int binaryToDecimal(char *binary) {
    return strtoul(binary, NULL, 2);
}


void decimalToBinary(unsigned int num, char *binary, int bitSize) {
    for (int i = bitSize - 1; i >= 0; i--) {
        binary[i] = (num & 1) ? '1' : '0';
        num >>= 1;
    }
    binary[bitSize] = '\0'; 
}

int main() {
    char binary[33], flippedBinary[33]; 
    unsigned int num, flippedNum;
    int bitSize = 32;

    
    printf("");
    scanf("%s", binary);
    num = binaryToDecimal(binary);
    flippedNum = ~num;
    decimalToBinary(flippedNum, flippedBinary, bitSize);

   
    printf("%s", flippedBinary);

    return 0;
}


