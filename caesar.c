#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char * argv[])
{

    if (argc == 2 && isdigit(*argv[1])) // check for an argument, make sure argv is a digit
    {
        // 1. get key and change from string to int  atoi

        int key = atoi(argv[1]);

        // 2. get input from user for plaintext and assign to variable , then print 'ciphertext'
        char s[20];
        printf("Plaintext:  \n");
        fgets(s, 20, stdin);
        printf("Ciphertext:");

        // 3. use for loop using length input variable

        for (int i = 0, n = strlen(s); i < n; i++)
        {
            // 4. if statement, input index greater or equal to 'a' and input index less than or equal to 'z'
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                //5. print char subtracting 'a' from index, then add key, then mod 26, then add 'a' back
                printf("%c", (((s[i] - 'a') + key) % 26) + 'a');
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                //6. same as 5. however for upper case
                printf("%c", (((s[i] -'A') + key) % 26) + 'A');
            }
            else
                printf("%c", s[i]);
        }
        printf("\n");
        return 0;
    }
    //7. Now if these are not met, print caesar usage k and return 1 for error
    else
        printf("Usage: ./caesar k\n");
        return 1;



    return 0;
}
