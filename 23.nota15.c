#include <stdio.h>

int main()
{
    printf("Programa pra ler as notas de  15 alunos:");
    ler();
    return 0;
}



int ler( )

{
 int vet,n = 0;
    while (n < 10)    {

    printf("Digite a nota de um aluno:");
    scanf("%d",&vet);
    n++;
    calcule(vet,n);
    }
return 1;
}


int calcule(int j,int i )

{
    int cont = 0,vetor[10],l ;
    vetor[i] = j;

      cont = cont + vetor[i];
      if ( i == 10)
      {
          printf("A media da turma e:%d",cont / 10);
      }
     l == i;
      ler(l);

    return 1;

}
