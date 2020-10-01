#include <stdio.h>

int main()
{
    
    int a, sum, so;
    sum = 0;
    
    for(a=1; a<3; a++)
    {
        printf("Nhập số thứ %d: ", a);
        scanf("%d", &so);
    sum=sum+so;
    }
    printf("Tổng hai số = %d\n", sum);
}
