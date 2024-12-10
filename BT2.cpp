#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Yeu cau nguoi dung nhap nhiet do theo do Celsius
    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);

    // Cong thuc chuyen doi sang do Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Hien thi ket qua
    printf("Nhiet do %.2f do Celsius bang %.2f do Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

