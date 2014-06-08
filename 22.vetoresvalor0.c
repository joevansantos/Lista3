#include <stdio.h>

int calcule()
{

    int i = 0,vetor[10];
        for (i = 0;i < 10;i ++)
        {
            printf("Digite um numero para o vetor:");
            scanf("%d",&vetor[i]);
                if (vetor[i] < 0)
                {
                   vetor [i] = 0 ;
                }

        }
        for (i = 0;i < 10;i ++)
        {
            printf("%d\n",vetor[i]);
                    }

   return 1;
}


int main ()

{

  printf("Substituir numeros negativos por 0 num vetor:\n");
  calcule();

return 0;
}

