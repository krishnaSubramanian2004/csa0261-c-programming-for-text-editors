#include <stdio.h>

int sumOfEvenNumbers(int n);
int sumOfOddNumbers(int n);

int main()
{
    int n, sum;
    char option;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("Do you want to find the sum of even (e) or odd (o) numbers? ");
    scanf(" %c", &option);
    
    switch (option)
    {
        case 'e':
            sum = sumOfEvenNumbers(n);
            printf("The sum of even numbers from 1 to %d is %d.\n", n, sum);
            break;
        case 'o':
            sum = sumOfOddNumbers(n);
            printf("The sum of odd numbers from 1 to %d is %d.\n", n, sum);
            break;
        default:
            printf("Invalid option!\n");
            break;
    }
    
    return 0;
}

int sumOfEvenNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return n + sumOfEvenNumbers(n - 2);
    }
    else
    {
        return sumOfEvenNumbers(n - 1);
    }
}

int sumOfOddNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n % 2 != 0)
    {
        return n + sumOfOddNumbers(n - 2);
    }
    else
    {
        return sumOfOddNumbers(n - 1);
    }
}
