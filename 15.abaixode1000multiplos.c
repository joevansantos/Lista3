#include <stdio.h>

int x,soma=0 ;

void ler()
{
  printf("Digite o limite dos numeros serao somados:");
  scanf("%d",&x);
}



 void calcule()
 {

  while (x > 0)
  {

   if ( (x % 3 == 0) || (x % 5 == 0))
      {
         printf("%d\n",x);
         soma = soma + x;
       }
     x--;

 }
}


void imprime()
 {
   printf ("a soma dos numeros foi: %d",soma);
 }

int main()

  {
     ler();
     calcule();
     imprime();
     return 0;
  }




