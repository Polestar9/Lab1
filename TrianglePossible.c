#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter sides a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b) 
    {
        printf("Can build a triangle.\n");
    } 
    else 
    {
        printf("Cannot build a triangle.\n");
    }
    return 0;
}