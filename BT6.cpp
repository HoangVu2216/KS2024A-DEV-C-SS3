#include <stdio.h>

int main() {
    float base, height, area;
    printf("Nhap do dai canh day: ");
    scanf("%f", &base);
    printf("Nhap chieu cao: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("Di?n tích tam giác là: %.2f\n", area);
    return 0;
}

