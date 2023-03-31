#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    int n;
    const char *str1 = "daily";
    const char *str2 = "question";
    n = strcmp(str1, str2);
    if (n < 0)
        printf("'%s' is less than '%s'\n",str1,str2);
    else if (n == 0)
        printf("'%s' equals '%s'\n",str1,str2);
    else if (n > 0)
        printf("'%s' is greater than '%s'\n",str1,str2);
    return 0;
}
