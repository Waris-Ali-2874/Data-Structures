#include <stdio.h>

void decimalToBase(int num, int base) {
    if (num == 0)
        return;

    int remainder = num % base;
    decimalToBase(num / base, base);

    if (remainder < 10)
        printf("%d", remainder);
    else
        printf("%c", remainder - 10 + 'A');
}

int main() {
    int num, base;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Enter the base (2-20): ");
    scanf("%d", &base);

    if (num == 0)
        printf("0");
    else
        decimalToBase(num, base);

    printf("\n");
    return 0;
}
