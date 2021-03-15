#include <stdio.h>

int main()
{
    int check1 = 0;
    int check2 = 0;
    int check3 = 0;
    char str1[100];
    char str2[100];
    char str3[100];
    gets(str1);
    gets(str2);
    gets(str3);
    int i = 0;
    while (check1 == 0 || check2 == 0 || check3 == 0)
    {
        while (1)
        {
            if (str1[i] == '\0' || check1 == 1)
            {
                printf("  ");
                check1 = 1;
            }
            if (check1 == 0)
            {
                printf("%c ", str1[i]);
            }

            break;
        }
        while (1)
        {
            if (str2[i] == '\0' || check2 == 1)
            {
                printf("  ");
                check2 = 1;
            }
            if (check2 == 0)
            {
                printf("%c ", str2[i]);
            }

            break;
        }
        while (1)
        {
            if (str3[i] == '\0' || check3 == 1)
            {
                printf("\n");
                check3 = 1;
            }
            if (check3 == 0)
            {
                printf("%c\n", str3[i]);
            }

            break;
        }
        i++;
    }

    return 0;
}