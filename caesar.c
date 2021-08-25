#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./ceasar key");
        return 1;
    }
    for (int key = 0; key < strlen(argv[1]); key++)
    {
        if (isalpha(argv[1][key]))
        {
            printf("Usage: ./ceasar key");
            return 1;
        }
    }
    int key = atoi(argv[1]) % 26;
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (!isalpha(plaintext[i]))
        {
        printf("%c", plaintext[i]);
        continue;
        }
        int offset = isupper(plaintext[i]) ? 65 : 97;
        int pi = plaintext[i] - offset;
        int ci = (pi + key) % 26;
        printf("%c", ci + offset);
    }
    printf("\n");
    return 0;
}
