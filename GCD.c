#include <stdio.h>
int gcd(int, int);
int main() {
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d,%d", &a, &b);
    printf("The GCD of %d and %d is: %d\n", a, b, gcd(a, b));
    return 0;
}
int gcd(int a, int b) {
    if (b==0)
        return a;
    else
        return gcd(b, a % b);
}
