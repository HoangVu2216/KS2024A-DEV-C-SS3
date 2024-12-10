#include <stdio.h>

int main() {
    char ten[100]; // Khai bao bien de luu ten

    printf("Nhap ten cua ban: ");
    fgets(ten, sizeof(ten), stdin); // Doc ten nguoi dung nhap vao

    // Loai bo ky tu xuong dong neu co
    for (int i = 0; ten[i] != '\0'; i++) {
        if (ten[i] == '\n') {
            ten[i] = '\0';
            break;
        }
    }

    printf("Xin chao %s!\n", ten); // In loi chao

    return 0;
}

