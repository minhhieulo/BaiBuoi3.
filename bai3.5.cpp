#include<stdio.h>
int main()
{

    int a, b, tg;
    printf("nhap a:");
    scanf("%d",&a);
    printf("nhap b:");
    scanf("%d",&b);
    while(b!=0)
    {
        tg = a % b;
        a = b;
        b = tg;
    }
    printf("UCLN là :%d",a);
}
