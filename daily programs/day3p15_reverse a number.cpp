#include <stdio.h>

void reverse(int n) {
    if (n == 0) { 
        return;
    }
    else {
        printf("%d", n % 10); 
        reverse(n / 10); 
    }
}

int main() {
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    printf("Reverse of %d is ", num);
    reverse(num);
    return 0;
}
