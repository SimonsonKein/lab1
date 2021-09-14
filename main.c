#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(int argc, char* argv[]) {
    float a, b, c;
    float startX, endX, dX;
    float f;
    int k = 0;

    printf("Enter:");
    printf("\ta = ");
    scanf("%f", &a);
    printf("\tb = ");
    scanf("%f", &b);
    printf("\tc = ");
    scanf("%f", &c);
    printf("\tX begin = ");
    scanf("%f", &startX);
    printf("\tX end = ");
    scanf("%f", &endX);
    printf("\tdX = ");
    scanf("%f", &dX);

    for (float x = startX; x <= endX; x += dX) {
        if (x < 0 && b != 0) {
            k=1;
            f = a * (float) pow(x + c, 2) - b;
        } else if (x > 0 && b == 0) {
            k=2;
            f = (x - a) / -c;
        } else {
            k=3;
            f = a + x / c;
        }
        if (!(((long) floorf(a) | (long) floorf(b)) & ((long) floorf(a) | (long) floorf(c)))) {
            printf("x = %.2f\tf %d = %.0f\n", x, k, f);
        } else {
            printf("x = %.2f\tf %d = %.2f\n", x, k, f);
        }
    }
    getch();
    
    return 0;
}