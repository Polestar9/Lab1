#include <stdio.h>

int main() 
{
    float x; //float for a proper checking a number after a dot
    printf("Enter x value: ");
    scanf("%f", &x);
    if (x < 0 || x > 1) 
    {
        printf("Doesn't belong to [0, 1] line.\n");
    }
     else 
    {
        printf("Belongs to [0, 1] line.\n");
    }
    return 0;
}