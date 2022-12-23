#include <stdio.h>

// Function without arguments and without return value
void print_hello()
{
    printf("Hello!\n");
}

// Function with arguments and without return value
void print_number(int n)
{
    printf("The number is %d.\n", n);
}

// Function without arguments and with return value
int get_current_year()
{
    return 2022;
}

// Function with arguments and with return value
int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Call the function without arguments and without return value
    print_hello();

    // Call the function with arguments and without return value
    print_number(123);

    // Call the function without arguments and with return value
    int current_year = get_current_year();
    printf("The current year is %d.\n", current_year);

    // Call the function with arguments and with return value
    int sum = add(10, 20);
    printf("The sum is %d.\n", sum);

    return 0;
}
