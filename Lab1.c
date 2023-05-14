#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    printf("Input A side ");
    scanf("%d", &a);
    printf("Input B side ");
    scanf("%d", &b);
    
    int c = sqrt(a*a + b*b); // hypotenuse
    int p = a + b + c; // finding perimeter
    printf("Hypotenuse (C side) = %d\nPerimeter = %d", c, p);
    return 0;

}