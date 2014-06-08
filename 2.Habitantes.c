#include <stdio.h>

int maior = 0,menor = 100,media,cont = 0,x,i,y,j,total = 0,cont1 = 0,cont2 = 0,cont3 = 0  ;

void leia()

{
   printf("Digite o numero de habitantes:");
   scanf("%d",&x);
   printf("Digite o valor do km:") ;
   scanf ("%d",&i);

}


void calcule()
{

    while (cont < x)
    {
       printf("Digite o consumo do mes:");
       scanf("%d",&y);
       printf("Digite o codigo do consumidor:\n1-Residencial\n2-Comercial\n3-Industrial\n");
       scanf("%d",&j);
       if (j == 1)
       {
           cont1 = cont1 + y;
       }
       if (j == 2)
       {
           cont2 = cont2 + y;
       }
       if (j == 3)
       {
           cont3 = cont3 + y;
       }

            total = total + y;
            if (y > maior)
            {
                maior = y;
            }
            if (y < menor)
            {
                menor = y;
            }
        cont++;
      }

}


 void imprime()
 {
       printf("O maior consumo foi:%d\n",maior);
       printf("O menor consumo foi:%d\n",menor);
       printf("A media consumo foi:%d\n",total / cont);
       printf("O consumo total do codigo residencial foi:%d\n",cont1);
       printf("O consumo total do codigo comercial foi:%d\n", cont2);
       printf("O consumo total do codigo industrial foi:%d\n",cont3);


 }


int main()

  {
     leia();
     calcule();
     imprime();
     return 0;
  }



