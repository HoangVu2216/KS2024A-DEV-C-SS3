#include <stdio.h>

int main() {
    int number, sum = 0;
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &number);

    sum += number % 10;
    number /= 10;
    sum += number % 10;
    number /= 10;
    sum += number % 10;
    number /= 10;
    sum += number;

    printf("Tong cac chu so la: %d\n", sum);
    return 0;
}

