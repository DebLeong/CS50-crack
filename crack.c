#define _XOPEN_SOURCE
#include <cs50.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, string argv[])
{
    // return 1 and error message if less or more than 1 argument
    if (argc != 2)
    {
        printf("Error: Please input one and only one argument.\n");
        return 1;
    }

    // declares array with 5 characters plus '\0'
    char password[5];

    // iterates through 1 to 4 letters by brute force
    for (int i = 0; i < 58; i++)
    {
        password[0] = 'A' + i;
        password[1] = '\0';
        string target = crypt(password, "50");
        if (strcmp(target, argv[1]) == 0)
        {
            printf("%s\n", password);
            return 0;
        }
        for (int j = 0; j < 58; j++)
        {
            password[1] = 'A' + j;
            password[2] = '\0';
            target = crypt(password, "50");
            if (strcmp(target, argv[1]) == 0)
            {
                printf("%s\n", password);
                return 0;
            }
            for (int k = 0; k < 58; k++)
            {
                password[2] = 'A' + k;
                password[3] = '\0';
                target = crypt(password, "50");
                if (strcmp(target, argv[1]) == 0)
                {
                    printf("%s\n", password);
                    return 0;
                }
                for (int l = 0; l < 58; l++)
                {
                    password[3] = 'A' + l;
                    password[4] = '\0';
                    target = crypt(password, "50");
                    if (strcmp(target, argv[1]) == 0)
                    {
                        printf("%s\n", password);
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}