#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
    int x, i;
    i = 2;
    printf("Enter number : ");
    scanf_s("%d", &x);
    printf("Factoring Result : ");

    while ((x > 1) && (i < x)) {
        if (x % i == 0) {
            printf("%d x ", i);
            x = x / i;
        }
        else i++;
    }
    printf("%d\n", i);
    return 0;
}
