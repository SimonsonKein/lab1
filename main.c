#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(int argc, char* argv[]) {

    float a, b, c;
    float startX, endX, dX;
    float f;
    int k;
    printf("Enter:\n");

    printf("a = ");
    scanf("%f", &a);

    printf("b = ");
    scanf("%f", &b);

    printf("c = ");
    scanf("%f", &c);

    printf("X begin = ");
    scanf("%f", &startX);

    printf("X end = ");
    scanf("%f", &endX);

    printf("dX = ");
    scanf("%f", &dX);

    // Первый вариант
    /*for (float x = startX; x <= endX; x += dX) {
        if (x < 0 && b != 0) {
            k = 1;
            f = a * (float) pow(x + c, 2) - b;
        } else if (x > 0 && b == 0) {
            if (c == 0) {
                k = 4;
                printf("x = %.2f\tf%d is not defined\n", x, k);
                continue;
            }
            k = 2;
            f = (x - a) / -c;
        } else {
            if (c == 0) {
                k = 4;
                printf("x = %.2f\tf%d is not defined\n", x, k);
                continue;
            }
            k = 3;
            f = a + x / c;
        }

        if (!(((long) floorf(a) | (long) floorf(b)) & ((long) floorf(a) | (long) floorf(c)))) {
            printf("x = %.2f\tf %d = %.0f\n", x, k, f);
        } else {
            printf("x = %.2f\tf %d = %.2f\n", x, k, f);
        }
    }*/

    //Второй вариант
    /*float x = startX;
    while (x <= endX) {
        if (x < 0 && b != 0) {
            k = 1;
            f = a * (float) pow(x + c, 2) - b;
        } else if (x > 0 && b == 0 && c != 0) {
            k = 2;
            f = (x - a) / -c;
        } else if (c != 0) {
            k = 3;
            f = a + x / c;
        } else {
            k = 4;
            printf("x = %.2f\tf%d is not defined\n", x, k);
            x += dX;
            continue;
        }

        if (!(((long) floorf(a) | (long) floorf(b)) & ((long) floorf(a) | (long) floorf(c)))) {
            printf("x = %.2f\tf %d = %.0f\n", x, k, f);
        } else {
            printf("x = %.2f\tf %d = %.2f\n", x, k, f);
        }
        x += dX;
    }*/

    //Третий вариант
    /*float x = startX;
    do {
        if (x < 0 && b != 0) {
            k = 1;
            f = a * (float) pow(x + c, 2) - b;
        } else if (x > 0 && b == 0 && c != 0) {
            k = 2;
            f = (x - a) / -c;
        } else if (c != 0) {
            k = 3;
            f = a + x / c;
        } else {
            k = 4;
            printf("x = %.2f\tf%d is not defined\n", x, k);
            x += dX;
            continue;
        }

        if (!(((long) floorf(a) | (long) floorf(b)) & ((long) floorf(a) | (long) floorf(c)))) {
            printf("x = %.2f\tf %d = %.0f\n", x, k, f);
        } else {
            printf("x = %.2f\tf %d = %.2f\n", x, k, f);
        }
        x += dX;
    } while (x <= endX);*/

    //Четвертый вариант


    return 0;
}





