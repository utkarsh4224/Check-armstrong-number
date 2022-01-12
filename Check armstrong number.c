#include <stdio.h>
int main() {
    int num, num2, rem, result = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    num2 = num;
    while (num2 != 0) {
        rem = num2 % 10;
        result += rem * rem * rem;
        num2 /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}

