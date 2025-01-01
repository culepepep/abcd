#include <stdio.h>
#include <math.h>

// Hàm tính n!!
long long tinh_n_fact(int n) {
    long long ket_qua = 1;
    if (n % 2 == 0) {
        for (int i = 2; i <= n; i += 2) {
            ket_qua *= i;
        }
    } else {
        for (int i = 1; i <= n; i += 2) {
            ket_qua *= i;
        }
    }
    return ket_qua;
}

// Hàm tính (-1)^n+1 * n!!
long long tinh_bieu_thuc(int n) {
    long long n_fact = tinh_n_fact(n);
    int he_so = pow(-1, n + 1);
    return he_so * n_fact;
}

int main() {
    int n;
    printf(" nhap n (n <= 2000): ");
    scanf("%d", &n);

    if (n > 2000) {
        printf("Gia tri cua n < 2000!\n");
    } else {
        // Tính n!!
        long long n_fact = tinh_n_fact(n);
        printf(" Gia tri cua %d!! la %lld\n", n, n_fact);

        // Tính (-1)^n+1 * n!!
        long long ket_qua_bieu_thuc = tinh_bieu_thuc(n);
        printf(" Gia tri cua (-1)^%d+1 * %d!! la %lld\n", n, n, ket_qua_bieu_thuc);
    } 

    return 0;
}
