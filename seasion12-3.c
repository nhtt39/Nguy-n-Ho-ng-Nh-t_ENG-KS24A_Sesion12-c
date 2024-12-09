#include <stdio.h>

int giai_thua(int n) {
    int gt = 1;
    for(int i = 1; i <= n; i++) {
        gt *= i;
    }
    return gt;
}

int main() {
    int n;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong the tinh giai thua cua so am.\n");
    } else {
        int ket_qua = giai_thua(n);
        printf("Giai thua cua %d la: %d\n", n, ket_qua);
    }

    return 0;
}

