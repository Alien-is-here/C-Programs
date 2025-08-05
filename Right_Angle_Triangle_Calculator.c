#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    float m1, m2, m3;

    printf("Enter values of x1 : ");
    scanf("%f", &x1);
    printf("Values are : %f\n", x1);

    printf("Enter values of y1 : ");
    scanf("%f", &y1);
    printf("Values are : %f\n", y1);

    printf("Enter values of x2 : \n");
    scanf("%f", &x2);
    printf("Values are : %f\n", x2);

    printf("Enter values of y2 : \n");
    scanf("%f", &y2);
    printf("Values are : %f\n", y2);

    printf("Enter values of x3 : \n");
    scanf("%f", &x3);
    printf("Values are : %f\n", x3);

    printf("Enter values of y3 : \n");
    scanf("%f", &y3);
    printf("Values are : %f\n", y3);

    if (x2 - x1 == 0) {
        m1 = INFINITY;
    } else {
        m1 = (y2 - y1) / (x2 - x1);
    }

    if (x3 - x2 == 0) {
        m2 = INFINITY;
    } else {
        m2 = (y3 - y2) / (x3 - x2);
    }

    if (x3 - x1 == 0) {
        m3 = INFINITY;
    } else {
        m3 = (y3 - y1) / (x3 - x1);
    }

    printf("M1 IS: %f\n", m1);
    printf("M2 IS: %f\n", m2);
    printf("M3 IS: %f\n", m3);

    if ((m1 * m2 == -1) || (m2 * m3 == -1) || (m1 * m3 == -1) ||
        (m1 == 0 && (m2 == INFINITY || m3 == INFINITY)) ||
        (m2 == 0 && (m1 == INFINITY || m3 == INFINITY)) ||
        (m3 == 0 && (m1 == INFINITY || m2 == INFINITY)) ||
        (m1 == INFINITY && m2 == 0)) {
        printf("The three points form a right-angle triangle.\n");
    } else {
        printf("The three points do not form a right-angle triangle.\n");
    }

    return 0;
}
