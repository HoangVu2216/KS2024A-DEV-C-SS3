#include <stdio.h>
#define PI 3.14159 // Dinh nghia hang so PI

int main() {
    float ban_kinh, chu_vi, dien_tich;

    // Nhap ban kinh tu nguoi dung
    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &ban_kinh);

    // Tinh chu vi va dien tich
    chu_vi = 2 * PI * ban_kinh;
    dien_tich = PI * ban_kinh * ban_kinh;

    // Hien thi ket qua
    printf("Chu vi hinh tron: %.2f\n", chu_vi);
    printf("Dien tich hinh tron: %.2f\n", dien_tich);

    return 0;
}

