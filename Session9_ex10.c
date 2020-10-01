#include <stdio.h>

int main()
{
    int x;
    char i, ans;
    x = 0;
    ans = 'y';
    do
    {
        
        printf("\nEnter sequence of character:");
        do
        {
            
            i = getchar();
            x++;
        }
        while(i != '\n');
        
        printf("\nNumber of characters entered is: %d", --x);
        printf("\nMore sequences (Y/N) ?");
        ans = getchar();
    }
    while(ans != 'n' || ans == 'y');
}
