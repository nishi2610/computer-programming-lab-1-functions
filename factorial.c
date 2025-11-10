#include <stdio.h>
int main() {
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    printf("The factorial of %d is: %d\n", a, fact(a));
    return 0;
}
int fact(int n) {
    if (n == 0 || n == 1)
            return 1;
    else 
        return (n * fact(n - 1));
}
