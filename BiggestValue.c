#include <stdio.h>

int main() {
    int a, b, c;
    printf("Input three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int d; //writing the biggest value into a d value
    d=a; // making value a as a temporary biggest value
    if (b>d) {
    d=b; // Checking if b is the biggest value
    }
    if (c>d) {
    d=c; // Checking if c is the biggest value
    }
    printf("Biggest number is: %d", d);
    return 0;
}