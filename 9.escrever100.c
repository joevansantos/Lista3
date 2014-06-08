#include <stdio.h>

int main()
{
    int x;
    ler(x);
    calcule (x);
    calcule2 (x);
    calcule3(x);
    return 0;
}

int ler(int n)

{
   printf("Digite ate quando quer que seja escrito: ");
   scanf("%d",&n);
}

int calcule(int y)

{
    int i ;
    for (i = 1;i <= y;i++)
    {
        printf ("%d\n",i);
    }

    printf ("Agora o while:\n");
}

int calcule2 (int n)
{
   int l = 1;
   while (l <= n)
    {
        printf("%d\n",l);
        l++;
    }
  printf("Agora o do while:\n");
}

int calcule3 (int m)
{
   int t = 1;
   do {
        printf ("%d\n",t);
        t = t + 1 ;
      }
       while (t <= m );

}



