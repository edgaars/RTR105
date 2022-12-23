#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Enter a decimal number: ");
    double n;
    scanf("%lf", &n);

    printf("Select a data type (char, int, long long): ");
    char data_type[10];
    scanf("%s", data_type);

    if (strcmp(data_type, "char") == 0)
    {
        // Calculate the factorial using a char data type
        char result = 1;
        for (int i = 1; i <= n; i++)
        {
            if (result > CHAR_MAX / i)
            {
                printf("Error: Cannot calculate the factorial using a char data type.\n");
                return 0;
            }
            result *= i;
        }

        printf("The factorial of %lf is %d\n", n, result);
    }
    else if (strcmp(data_type, "int") == 0)
    {
        // Calculate the factorial using an int data type
        int result = 1;
        for (int i = 1; i <= n; i++)
        {
            if (result > INT_MAX / i)
            {
                printf("Error: Cannot calculate the factorial using an int data type.\n");
                return 0;
            }
            result *= i;
        }

        printf("The factorial of %lf is %d\n", n, result);
    }
    else if (strcmp(data_type, "long long") == 0)
    {
        // Calculate the factorial using a long long data type
        long long result = 1;
        for (int i = 1; i <= n; i++)
        {
            if (result > LLONG_MAX / i)
            {
                printf("Error: Cannot calculate the factorial using a long long data type.\n");
                return 0;
            }
            result *= i;
        }

        printf("The factorial of %lf is %lld\n", n, result);
    }
    else
    {
        printf("Error: Invalid data type.\n");
    }

    return 0;
}
