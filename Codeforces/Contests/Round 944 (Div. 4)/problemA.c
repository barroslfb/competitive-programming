#include <stdio.h>

int main(void)
{
    int numberTestCases;
    scanf("%i", &numberTestCases);

    for (int i = 0; i < numberTestCases; i++)
    {
        int n0, n2;
        scanf("%i %i", &n0, &n2);

        if (n0 > n2 || n0 == n2)
            printf("%i %i\n", n2, n0);
        else
            printf("%i %i\n", n0, n2);
    }
}
