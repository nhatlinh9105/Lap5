#include <stdio.h>

int main()
{
    int a;
    printf("Số dòng: ");
    scanf("%d", &a);
    for(int i =1;i<=a;i++)
    {
        printf("\n");
        for (int j=0;j<i;j++)
        {
            printf("%d",j+1);
        }
    }
}

#include <stdio.h>

int main()
{
    int a;
    printf("Số dòng: ");
    scanf("%d", &a);
    for(int i=a;i>=0;i--)
    {
        printf("\n");
        for (int j=i;j>0;j--)
        {
            printf("%d",j);
        }
    }
}
