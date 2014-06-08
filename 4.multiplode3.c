#include <stdio.h>

int main()

{
    int x;
    for (x = 1;x < 6;x++)
    {
        printf("%d\n",x*calcule());
    }
    return 0;
}


int calcule()

{
    return 3;
}


