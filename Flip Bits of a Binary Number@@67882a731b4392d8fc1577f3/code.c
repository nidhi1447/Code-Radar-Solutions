#include <stdio.h>

int main() {
    unsigned int num, flipped;
    printf("");
    scanf("%u", &num);
    flipped = ~num;
    printf("%u", flipped);

    return 0;
}
