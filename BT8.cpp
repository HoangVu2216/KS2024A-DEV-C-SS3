#include <stdio.h>

int main() {
    int number, inverse = 0;
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &number);

    inverse += number % 10 * 1000;
    number /= 10;
    inverse += number % 10 * 100;
    number /= 10;
    inverse += number % 10 * 10;
    number /= 10;
    inverse += number;

    printf("So nghich dao la: %d\n", inverse);
    return 0;
}

