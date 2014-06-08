#include <stdio.h>

int d,primo,d = 2,primo = 1,n;

void leia()

{
   printf("Digite um numero: ");
   scanf("%d", &n);
}


void calcule()
{

   if (n <= 1){
            primo = 0;
    }


    while (primo == 1 && d <= n / 2)
    {
	if (n % d  == 0)
	    primo = 0;
	d = d + 1;
    }

}


 void imprime()
 {
       if (primo == 1)
	printf("%d e' primo \n", n);
    else
	printf(" %d nao e' primo \n", n);


 }


int main()

  {
     leia();
     calcule();
     imprime();
     return 0;
  }



