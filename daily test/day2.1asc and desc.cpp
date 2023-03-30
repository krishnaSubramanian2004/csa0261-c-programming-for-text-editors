#include <stdio.h>

int main() {
    int i;

    printf("Numbers in ascending order with an increment of 3: ");
    for (i = 0; i <= 30; i += 3) 
	{
        printf("%d ", i);
    }

    printf("\nNumbers in descending order with an increment of 3: ");
    for (i = 30; i >= 0; i -= 3) 
	{
        printf("%d ", i);
    }

    return 0;
}

