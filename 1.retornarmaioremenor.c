#include <stdio.h>

int maior = 0,menor = 100,media,x;

void calcule()
{

    printf("Digite um numero:");
    scanf("%d",&x);

    if (x < 0)
    {
        imprime();
    }

    else
    {
        if ( x > maior )
            {
                maior = x;
            }

                if (x < menor && x >= 0)
                    {
                        menor = x;
                    }
                calcule(x);
    }

}


 void imprime()
 {
   printf("\nO maior numero e :%d",maior);
   printf("\nO menor numero e : %d",menor);

 }


int main()

  {
     calcule();
     return 0;
  }


