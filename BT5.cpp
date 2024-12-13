#include <stdio.h>

int main() {
    // D? li?u sinh viên
    char *ho_ten[] = {
        "Nguyen Van A", "Nguyen Van B", "Nguyen Van C", "Nguyen Van D",
        "Nguyen Van E", "Nguyen Van F", "Nguyen Van G", "Nguyen Van H",
        "Nguyen Van I", "Nguyen Van K"
    };
    int tuoi[] = {20, 21, 18, 19, 22, 20, 23, 19, 18, 21};
    char *so_dien_thoai[] = {
        "0904488481", "0904488482", "0904488483", "0904488484",
        "0904488485", "0904488486", "0904488487", "0904488488",
        "0904488489", "0904488480"
    };
    char *email[] = {
        "anv@rikkeiacademy.com", "bnv@rikkeiacademy.com", "cnv@rikkeiacademy.com",
        "dnv@rikkeiacademy.com", "env@rikkeiacademy.com", "fnv@rikkeiacademy.com",
        "gnv@rikkeiacademy.com", "hnv@rikkeiacademy.com", "inv@rikkeiacademy.com",
        "knv@rikkeiacademy.com"
    };

    // In tiêu d?
    printf("-------------------------------------------------------------\n");
    printf("| %-3s | %-15s | %-4s | %-12s | %-25s |\n", "STT", "Ho va ten", "Tuoi", "So dien thoai", "email");
    printf("-------------------------------------------------------------\n");

    // In danh sách sinh viên
    for (int i = 0; i < 10; i++) {
        printf("| %-3d | %-15s | %-4d | %-12s | %-25s |\n", i + 1, ho_ten[i], tuoi[i], so_dien_thoai[i], email[i]);
    }
    printf("-------------------------------------------------------------\n");

    return 0;
}

