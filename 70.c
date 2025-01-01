#include <stdio.h>
void nhap_mang(int mang[], int so_phan_tu, char ten_mang) {
    for (int i = 0; i < so_phan_tu; i++) {
        printf(" nhap phan tu %d cua mang %c: ", i + 1, ten_mang);
        scanf("%d", &mang[i]);
    }
}
void xuat_mang(int mang[], int so_phan_tu, char ten_mang) {
    printf("Mang %c: ", ten_mang);
    for (int i = 0; i < so_phan_tu; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}
void noi_mang(int a[], int size_a, int b[], int size_b, int mang_noi[]) {
    int i = 0, j = 0, k = 0; 
    while (i < size_a && j < size_b) {
        if (a[i] <= b[j]) {
            mang_noi[k++] = a[i++];
        } else {
            mang_noi[k++] = b[j++];
        }
    }
    while (i < size_a) {
        mang_noi[k++] = a[i++];
    }
    while (j < size_b) {
        mang_noi[k++] = b[j++];
    }
}
int main() {
    int size_a, size_b;

    // Nhập kích thước của mảng A và B
    printf(" nhap so phan tu mang A: ");
    scanf("%d", &size_a);
    printf(" nhap so phan tu mang B: ");
    scanf("%d", &size_b);

    int a[size_a], b[size_b], mang_noi[size_a + size_b];
    nhap_mang(a, size_a, 'A');
    nhap_mang(b, size_b, 'B');
    xuat_mang(a, size_a, 'A');
    xuat_mang(b, size_b, 'B');
    noi_mang(a, size_a, b, size_b, mang_noi);
    xuat_mang(mang_noi, size_a + size_b, "A nối với B");

    return 0;
}
