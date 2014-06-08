#include <stdio.h>

int main()

{
   int x = 20,vet[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},i = 0 ;

   while (i <= 20){


        if (x % vet[i] ==  0) {
                i++;}

        else {  i = 0; x++; }
         if (i == 20){
       printf(" O menor divisivel e: %d ",x);
                        }

                 }

    return 0;
}


