#include <stdio.h>

int a = 0,b = 1,x,c =  1,i = 0 ;

void leia()
{
  printf("Digite um numero:");
  scanf("%d",&x);
}


void calcule()
{
while (c <=  x)
  {
     c = (a + b) ;
      b = c;
      a = (c - a);

  }
}


 void imprime()
 {
   printf("O numero acima e: %d",c);
 }


int main()

  {
     leia();
     calcule();
     imprime();
     return 0;
  }


