#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#include <time.h>

void wait ( int seconds )
{
clock_t endwait;
endwait = clock () + seconds * CLK_TCK;
while (clock() < endwait) {}
}

int main ()
{
int n;
printf ("Starting countdown...\n");
for (n=10; n>0; n--)
{
printf ("%d\n",n);
system ("cls");
wait (1);

}
printf ("FIRE!!!\n");


system ("pause");

}
