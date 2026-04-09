#include <stdio.h>

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = sum(num1, num2);
    printf("%d\n", result);
    return 0;
}
