#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "MyHeader.h"
#include <stdbool.h>

char PasswordChecker(char myPass[])
{
    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool special = false;
    int minLength = 8;

    if (strlen(myPass) >= minLength)
    {
        for (int i = 0; i < strlen(myPass); i++)
        {
            if (isalpha(myPass[i]))
            {
                if (isupper(myPass[i]))
                {
                    upper = true;
                }
                else
                    lower = true;
            }
            else
            {
                if (isdigit(myPass[i]))
                {
                    digit = true;
                }
                else
                    special = true;
            }
        }
        (upper == true && lower == true && digit == true && special == true) ? printf("Your password meets the min. criterier... Confirmed!") : printf("Your password does NOT meet the min. criterier!");
    }
    else
    {
        printf("Your password is not long enough! Try Again...");
    }


    return myPass[20];
}

int main()
{
    char PassW[20];

    printf("Please enter a password to test if it's valid!\n");
    scanf("%s", PassW);

    PasswordChecker(PassW);
}
