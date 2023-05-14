#include <stdio.h>

int main() {
    int a, b, c;
    printf("Input triangle sides lengths: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        printf("Equilateral Triangle.\n");
    } else if (a == b || b == c || c == a) 
    {
        printf("Isoceles Triangle.\n");
    } 
    else 
    {
        printf("Scalene Triangle.\n");
    }
    return 0;
}