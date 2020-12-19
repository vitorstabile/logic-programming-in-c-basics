#include <stdio.h>
#include <string.h>

int main() {

    int x1, y1;
    x1 = 5;
    y1 = 2 * x1;
    printf("%d\n", x1);
    printf("%d\n", y1);

    int x2;
    double y2;
    x2 = 5;
    y2 = 2 * x2;
    printf("%d\n", x2);
    printf("%.1lf\n", y2);

    double b1, b2, h, area;
    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1 + b2) / 2.0 * h;
    printf("%lf\n", area);

    int a, b, result;
    a = 5;
    b = 2;
    result = a / b;
    printf("%d\n", result);

    return 0;
}
