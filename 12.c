#include <stdio.h>
#include <math.h>
double dt_ht(double a, double b, double alpha) {
    double alphaRad = alpha * M_PI / 180.0;
    double h = abs(a - b) / 2 * tan(alphaRad);
    double S = ((a + b) / 2) * h;
    return S;
}
int main() {
    double a, b, alpha;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &alpha);
    double dt = dt_ht(a, b, alpha);
    printf("%.2lf\n", dt);
    return 0;
}
