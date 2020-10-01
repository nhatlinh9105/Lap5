#include <stdio.h>

int main()
{
    int a0, a1, a2, n;
    a0 = 1;
    a1 = 1;
    
    printf("Bạn muốn in bao nhiêu số của dãy Fibonacci: ");
    scanf("%d", &n);
    printf("%d\t%d", a0, a1);
    for(int i=1; i<n; i++)
    {
        a2 = a0 + a1;
        printf("\t%d", a2);
        a0 = a1;
        a1 = a2;
    }
}
