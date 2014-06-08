#include <stdio.h>

int main()

{
  int x;
  printf("Digite quandos vetores serao somados:");
  scanf("%d",&x);
  soma(x);
  return 0;
}


int soma(int n)

{

    int i = 0,j[n],total = 0,maior = 0,r;

    while (i < n)
    {
        printf("Digite um numero:\n");
        scanf("%d",&j[i]);
        total = total + j[i];
            if (j[i] > maior)
            {
                maior = j[i];
                r = i;
            }
        i = i + 1;
    }
    printf("O total de numeros foi: %d\n",total);
    printf("O maior numero foi:%d\n",maior);
    printf("A posicao do vetor e:%d\n",r);
    return 1;
}
