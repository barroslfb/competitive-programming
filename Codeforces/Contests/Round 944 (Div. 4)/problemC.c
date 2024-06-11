#include <stdio.h>

int main(void)
{
    int numberTestCases;
    scanf("%i", &numberTestCases);
    
    for (int i = 0; i < numberTestCases; i++)
    {
        int a, b, c, d;
        scanf("%i %i %i %i", &a, &b, &c, &d);

        int menor, maior;
        if (a > b)
        {
            maior = a;
            menor = b;
        }
        else
        {
            menor = a;
            maior = b;
        }

        int contador = 0;
        while (menor != maior)
        {
            if (menor == c || menor == d)
            {
                contador++;
            }
            menor++;            
        }

        if (contador == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
