// Finding Extremas (Maximum and Minimum POints)
#include <stdio.h>

int main() {
    float a , b , c;
    float x , y;
    float x_val = 0;
    float y_intercept;
    
    printf("Enter Values of a , b , c : ");
    scanf("%f %f %f", &a , &b , &c);
    
// Finding x 
    x = -b / (2 * a);
    printf("\nValue of x is %f", x);

// Finding y
    y = a *x *x + b*x +c;
    printf("\nValue of y is %f", y);

// Calculating Either its Maxima or Minima
    if (a > 0)
        printf("\nExtrema is maximum point of %.2f , %.2f ", x , y );
    else if (a < 0)
        printf("\nExtrema is maximum point of %.2f , %.2f ", x , y );
    else 
        printf("\nP0ints are at (0,0) location");

// Calculating y_intercept
    y_intercept = a * x_val * x_val + b * x_val +c;
    printf("\nValue of y_intercept is ( 0, %.2f)",y_intercept);

    
    return 0;
}
