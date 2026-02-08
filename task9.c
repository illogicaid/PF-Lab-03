#include <stdio.h>

int main() {
    double d;

    printf("Enter a double: ");
    scanf("%lf", &d);
    
    printf("Default precision: %lf\n", d);
    printf("2 decimal precision: %.2lf\n", d);
    printf("5 decimal precision: %.5lf\n", d);

    return 0;
}

