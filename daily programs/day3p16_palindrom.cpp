#include <stdio.h>

int isPalindrome(int n, int reverse) {
    if (n == 0) { 
        return n == reverse;
    }
    else {
        int last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        return isPalindrome(n / 10, reverse);
    }
}

int main() {
    int num;
    printf("Enter a number to check whether it is a palindrome or not: ");
    scanf("%d", &num);
    if (isPalindrome(num, 0)) {
        printf("%d is a palindrome number\n", num);
    }
    else {
        printf("%d is not a palindrome number\n", num);
    }
    return 0;
}
