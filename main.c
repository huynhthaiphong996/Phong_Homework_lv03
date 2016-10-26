#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,i;
    float kq=0;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        kq+=(float)1/(giaithua(i));
    }
    printf("Ket qua:%f",kq);
}

int giaithua(int n)
{
    int i,kq=1;
    for(i=1;i<=n;i++)
    {
        kq*=i;
    }
    return kq;
}
