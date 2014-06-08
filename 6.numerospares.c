#include <stdio.h>

int i = 0,j = 0,calcule = 0,x ;

void leia()

{
   printf("Digite a quantidade de pares:");
    scanf("%d",&x);
}


void calcula()
{

    while (i < x)
    {
        printf("%d\n",j);
        i++;
        calcule = calcule + j;
        j = j + 2;
    }

}

void imprime()
{

  printf("\nO total de numeros pares e: %d",calcule);

}

int main()

  {
     leia();
     calcula();
     imprime();
     return 0;
  }



