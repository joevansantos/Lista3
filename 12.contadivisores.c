#include <stdio.h>

int num,i ;

void ler()
{
   printf("Dgite um numero para se mostrar seus divisores: ");
   scanf("%d",&num);
   i = num - 1 ;
}


 void imprime()
 {
    while (i > 0)
     {
        if(num % i == 0)
        {
            printf("%d\n",i);
        }

        i--;
     }
 }


int main()

  {
     ler();
     imprime();
     return 0;
  }


