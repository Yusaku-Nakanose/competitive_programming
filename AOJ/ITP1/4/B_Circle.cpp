#include <stdio.h>
#include <cmath>

int main() {
    double r;
    scanf("%lf", &r);
    printf("%.7lf %.7lf", M_PI*r*r, 2*M_PI*r);
    return 0;
}