#include <stdio.h>

int i,cont = 0;
char nome;

void ler()
{

    printf("Digite um numero:");
    gets (nome);
}


void calcule()

{


}
 void imprime()
 {
    printf("o numero e: %s\n",nome);
    printf("o numero e: %s\n",nome[0]);
    printf("o numero de ocorrencias de 1 e: %d",cont);
 }


int main()

  {
     ler();
     imprime();
     return 0;
  }


