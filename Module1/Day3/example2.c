#include <stdio.h>

void Print_bits(int n);

int main() {
    int n;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &n);

    printf("Bits of the number: ");
    Print_bits(n);

    return 0;
}

void Print_bits(int n) {
    unsigned int mask = 1 << 31;  

    for (int i = 0; i < 32; i++) {
      
        if ((n & mask) != 0) {
            printf("1");
        } else {
            printf("0");
        }

        mask >>= 1;
    }

    printf("\n");
}