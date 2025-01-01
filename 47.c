#include <stdio.h>
#include <math.h>
double giai_thua(int n) {
    double kq = 1;
    for (int i = 1; i <= n; i++) {
        kq *= i;
    }
    return kq;
}
double do_sang_radian(double x_do) {
    return x_do * M_PI / 180.0;
}
double tinh_sin(double x) {
    double EPS = 1e-6;
    double term = x;  
    double sin_x = term;  
    int n = 1;

    while (fabs(term) >= EPS) {
        term = -term * x * x / ((2 * n) * (2 * n + 1));  
        sin_x += term; 
        n++;
    }

    return sin_x;
}

int main() {
    double x_do;
    printf(" Nhap x (do): ");
    scanf("%lf", &x_do);

    double x_radian = do_sang_radian(x_do);
    double ket_qua = tinh_sin(x_radian);
    printf(" sin(%.6f) = %.6f\n", x_do, ket_qua);

    return 0;
}

