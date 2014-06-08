#include <stdio.h>

int i = 0,j = 1,n;

void leia()

{
   printf("Digite a quantidade numeros impares:");
   scanf("%d",&n);
}


void calcule()
{

    while (i < n)
    {
        printf("%d\n",j);
        j = j + 2;
        i++;

    }

}



int main()

  {
     leia();
     calcule();
     return 0;
  }



