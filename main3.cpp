#include <stdio.h>

int max (float a, float b)
{
    if (a > b) {
        return a;
    } else {
    return b;
    }
}

int main ()
{
    int a = 2, b = 1, y;
    y = max(a, b);
    printf("%d", y);
    return 0; 
}
