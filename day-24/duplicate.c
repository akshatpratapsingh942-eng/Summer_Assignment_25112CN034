#include <stdio.h>

int main() 
{
    char str[100];
    int visited[256] = {0};
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (!visited[(unsigned char)str[i]]) 
        {
            visited[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
    }

    str[j] = '\0';

    printf("String after removing duplicates: %s", str);

    return 0;
}