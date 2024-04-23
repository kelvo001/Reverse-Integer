#include <stdio.h>

int reverse_integer(int num) {
    int reversed = 0;
    int sign = 1;

   
    if (num < 0) {
        sign = -1;
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed * sign;
}

int main() {
    int input_number;
    printf("Enter an integer: ");
    scanf("%d", &input_number);

    int reversed_number = reverse_integer(input_number);
    printf("Reversed number: %d\n", reversed_number);

    return 0;
}
