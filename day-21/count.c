#include <stdio.h>

int main() 
{
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
    {
        char ch = str[i];

        
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
        {

            
            if (ch >= 'A' && ch <= 'Z') 
            {
                ch = ch + 32;
            }

            
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u') 
                {
                vowels++;
            } else 
            {
                consonants++;
            }
        }

        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}