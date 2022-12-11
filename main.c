#include "stdio.h"

int main() {
    double a;
    char b;
    scanf("%f", &a);
    scanf(" %c", &b);
    printf("%f %c", a, b);
    return 0;
}