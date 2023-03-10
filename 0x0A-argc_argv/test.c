#include <stdio.h>
int main(int argc, char *argv[]) {
    // Check if the program received two arguments
    if (argc != 3) {
        // Print an error message and return 1
        putchar('E');
        putchar('r');
        putchar('r');
        putchar('o');
        putchar('r');
        putchar('\n');
        return 1;
    }

    // Convert the arguments to integers
    int num1 = 0;
    int num2 = 0;
    for (int i = 0; argv[1][i] != '\0'; i++) {
        num1 = num1 * 10 + (argv[1][i] - '0');
    }
    for (int i = 0; argv[2][i] != '\0'; i++) {
        num2 = num2 * 10 + (argv[2][i] - '0');
    }

    // Multiply the two numbers
    int result = num1 * num2;

    // Print the result followed by a newline
    if (result < 0) {
        putchar('-');
        result = -result;
    }
    if (result == 0) {
        putchar('0');
    }
    while (result > 0) {
        int digit = result % 10;
        putchar(digit + '0');
        result /= 10;
    }
    putchar('\n');

    return 0;
}
