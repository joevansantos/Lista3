#include <stdio.h>
#include <stdlib.h>

int main()

{
  int x;
  printf("Digite quandos vetores serao alocados:");
  scanf("%d",&x);
  soma(x);
  return 0;
}


int soma(int y)

{
    int vet[y],i = 0,n[y],j = 0 ;

    while (i < y)
    {
        printf("Digite um numero entre 0 e 50:");
        scanf("%d",&vet[i]);
           if ((vet[i] % 2) != 0)
           {
          n[j] = vet[i];
               j++;
            printf("%d\n",n[j]);
           }
      i++;

    }




}
