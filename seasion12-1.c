#include <stdio.h>

int tinh_tong(int a, int b) {
    return a + b;
}

int main() {
    int a, b, tong;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    tong = tinh_tong(a, b);

    printf("Tong cua %d va %d la: %d\n", a, b, tong);


    return 0;
}

