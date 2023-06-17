#include <stdio.h>

int Del_digit(int num);

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Invalid input\n");
        printf("please enter a valid number");
        return 0;
    }

    int largest_number = Del_digit(num);

    printf("Largest number after deleting a digit: %d\n", largest_number);

    return 0;
}

int Del_digit(int num) {
    int largest_number = 0;
    int Current_number = num;

    int Divisor = 1;
    while (Divisor <= Current_number)
    {
        int digit = (Current_number / Divisor) % 10;
        int Remaining_number = (Current_number / (Divisor * 10)) * Divisor + (Current_number % Divisor);

        if (Remaining_number > largest_number) {
            largest_number = Remaining_number;
        }

        Divisor *= 10;
    }

    return largest_number;
}
