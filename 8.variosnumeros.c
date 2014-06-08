#include <stdio.h>

int x,j=0 ,i,maior=0,menor=1000,soma=0,cont=0;

void leia()

{
   printf("Digite a quantidade de numeros:");
   scanf("%d",&x);
}

void calcule()
{

   while (j < x)
    {
     printf("Digite um numero:\n");
     scanf("%d",&i);
     soma = soma + i;
        if (i > maior)
        {
            maior=i;
        }

        if (i < menor )
        {
          menor=i;
        }

        cont++;
      j++;
    }

}


 void imprime()
 {
    printf("a soma e: %d.\n",soma);
    printf("a quantidade de numeros e: %d.\n",cont);
    printf("a media de numeros e: %d.\n",cont/soma);
    printf("o maior numero e: %d.\n",maior);
    printf("o menor numero e: %d.\n",menor);




 }


int main()

  {
     leia();
     calcule();
     imprime();
     return 0;
  }



