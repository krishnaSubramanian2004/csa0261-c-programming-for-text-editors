#include <stdio.h>
#include<string.h>

int main() {
    char str1[100] = "daily test";
    char str2[100] = " second question";

    strcat(str1,str2);

    printf("Concatenated string: %s\n", str1);
    return 0;
}

