#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;
    printf("");
    scanf("%u", &num);
    while ((num & 1) == 0) {  
        count++;   
        num >>= 1; 
    }

    
    printf("%d", count);

    return 0;
}
