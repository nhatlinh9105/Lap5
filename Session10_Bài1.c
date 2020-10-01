#include <stdio.h>

int main()
{
    char i[50];
    int tuoi;
    
    printf("Nhập tên của bạn: ");
    fgets(i, 50, stdin);
    printf("Nhập số tuổi của bạn: ");
    scanf("%d", &tuoi);
    
    for(int a=1; a <= tuoi; a++)
    {
        printf("Tên của bạn là %s(%d)", i, a);
    }
}
