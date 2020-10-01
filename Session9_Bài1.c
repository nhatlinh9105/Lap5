#include <stdio.h>

int main()
{
    int num;
    for(num = 100; num > 0; num--)
    {
        if(num % 5 == 0)
        printf("\t%d", num);
    }
}
