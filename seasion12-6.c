#include <stdio.h>
#include <stdbool.h>

bool kiem_tra_so_hoan_hao(int n) {
    if (n <= 1) {
        return false;
    }
    
    int tong = 0;
    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            tong += i; 
        }
    }
    
    return tong == n;
}

int main() {
    int a, b;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    if (kiem_tra_so_hoan_hao(a)) {
        printf("%d la so hoan hao.\n", a);
    } else {
        printf("%d khong phai la so hoan hao.\n", a);
    }

    if (kiem_tra_so_hoan_hao(b)) {
        printf("%d la so hoan hao.\n", b);
    } else {
        printf("%d khong phai la so hoan hao.\n", b);
    }

    return 0;
}

