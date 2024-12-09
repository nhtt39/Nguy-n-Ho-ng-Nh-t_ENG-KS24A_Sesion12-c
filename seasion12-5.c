#include <stdio.h>
#include <stdbool.h>

bool kiem_tra_so_nguyen_to(int n) {
    if (n < 2) {
        return false;
    }
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    if (kiem_tra_so_nguyen_to(a)) {
        printf("%d la so nguyen to.\n", a);
    } else {
        printf("%d khong phai la so nguyen to.\n", a);
    }

    if (kiem_tra_so_nguyen_to(b)) {
        printf("%d la so nguyen to.\n", b);
    } else {
        printf("%d khong phai la so nguyen to.\n", b);
    }

    return 0;
}

