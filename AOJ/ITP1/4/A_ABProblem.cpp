#include <stdio.h>
using namespace std;

int main() {
    double a, b;
    scanf("%lf%lf", &a,&b);
    int d = a/b;
    int r = (int)a%(int)b;
    double f = a/b;
    printf("%d %d %f", d, r, f);
    return 0;
}