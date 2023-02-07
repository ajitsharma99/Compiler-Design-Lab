#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }
    }

    printf("No of Vowels: %d\n", vowels);
    printf("No of Consonants: %d\n", consonants);

    return 0;
}
