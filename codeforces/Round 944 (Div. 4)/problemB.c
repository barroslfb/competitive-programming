#include <stdio.h>
#include <string.h>

int main(void)
{
    int number;
    scanf("%i", &number);

    for (int i = 0; i < number; i++)
    {
        char s[11];
        scanf("%s", s);
        char temp = s[0];
        int cont = 0;

        if (strlen(s) == 0 || strlen(s) == 1)
        {
            printf("NO\n");
        }
        else
        {
            for (int i = 0; i < strlen(s); i++)
            {
                if (s[0] == s[i])
                {
                    cont++;
                }
                else
                {
                    break;
                }
            }
            if (cont == strlen(s))
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
                for (int i = 0; i < strlen(s); i++)
                {
                    if (s[0] != s[i])
                    {
                        s[0] = s[i];
                        s[i] = temp;
                        break;
                    }
                }
                printf("%s\n", s);
            }
        }
    }
}
