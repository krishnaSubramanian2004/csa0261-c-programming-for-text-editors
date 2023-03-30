#include <stdio.h>

int sumOfNumbers(int n);

int main()
{
    int n, sum;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    sum = sumOfNumbers(n);
    
    printf("The sum of natural numbers from 1 to %d is %d.\n", n, sum);
    
    return 0;
}

int sumOfNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sumOfNumbers(n - 1);
    }
}
