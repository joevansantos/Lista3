#include <stdio.h>

int a = 0,b = 1,x,c =  0,cont = 0 ;

void ler()
{
  printf("Digite um numero:");
  scanf("%d",&x);
}



 void calcule()
 {

  for (cont = 0;cont <  x;cont = (cont + c))
  {
     c = (a + b) ;
     b = c;
     a = (c - a);
  }


}


void imprime()
 {
   printf("O numero abaixo e : %d",cont );
 }

int main()

  {
     ler();
     calcule();
     imprime();
     return 0;
  }





