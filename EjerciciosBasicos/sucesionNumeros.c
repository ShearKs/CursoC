#include <stdio.h>

int main()
{

    int num = 10;

    for (int i = 1; i <= 10000; i *= num)
    {

        printf("%i  ", i);

        //num *= 10;
    }

    
}
