#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,i,kq=1;
    printf("Nhap vao n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        kq*=i;
    }
    printf("Ket qua:%d",kq);
}
