#include <stdio.h>

int main()
{
    int a;
    printf("Nhập số dòng: ");
    scanf("%d", &a);
    
    for(int b=0; b<=a; b++)
    {
        printf("\n");
        for(int c=1;c<=b;c++)
        {
            printf("%d\t", c);
        }
    }
}
