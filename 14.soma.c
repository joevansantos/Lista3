#include <stdio.h>

int i,n,x[10],soma=0 ;

void ler()
{
   printf("Digite quantos numeros devem ser somados:");
   scanf("%d",&n);
}


 void calcule()
 {

   for(i = 0;i < n;i++)
 {

     printf("Digite um numero:");
     scanf("%d",&x[i]);
     soma = soma + x[i];

 }
}


void imprime()
 {
   printf ("a soma e: %d",soma);
 }

int main()

  {
     ler();
     calcule();
     imprime();
     return 0;
  }




