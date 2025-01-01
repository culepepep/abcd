#include <stdio.h>
int uscln(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int bscnn(int a, int b) {
    return (a * b) / uscln(a, b);
}
void nhapMang(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" A[%d]: ", i);
        scanf("%d", &A[i]);
    }
}
void xuatMang(int A[], int n) {
    
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int usclnMang(int A[], int n) {
    int result = A[0];
    for (int i = 1; i < n; i++) {
        result = uscln(result, A[i]);
    }
    return result;
}
int bscnnMang(int A[], int n) {
    int result = A[0];
    for (int i = 1; i < n; i++) {
        result = bscnn(result, A[i]);
    }
    return result;
}

int main() {
    int n;
    
    scanf("%d", &n);

    int A[n];

    nhapMang(A, n);

    xuatMang(A, n);

    int usclnCuaMang = usclnMang(A, n);
    printf(" USCLL = %d\n", usclnCuaMang);

    int bscnnCuaMang = bscnnMang(A, n);
    printf(" BSCNN = %d\n", bscnnCuaMang);

    return 0;
}