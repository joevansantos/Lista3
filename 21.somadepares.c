#include <stdio.h>

int main()

{
    int vetor[10],i = 0,cont = 0;

    while (i < 10)

    {
        printf("Digite um numero:");
        scanf("%d",&vetor[i]);
        printf("%d\n",vetor[i]);

        if ((vetor[i] % 2) == 0  )
        {
           cont = cont + 1;
        }
        i = i + 1;
    }
    printf("a quantidade de pares foi  :%d",cont);
return 0;
}
