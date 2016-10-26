#include <stdio.h>
#include <stdlib.h>

void main()
{
   unsigned  int n;
   printf("Nhap vao so nguyen duong n:");
   scanf("%d",&n);
   He2(n);
   He8(n);
   He16(n);
}
void He2(int n)
{
    int mang[8],i=0,j;
    while(n!=0)
    {
        mang[i] = n%2;
        n = n/2;
        i++;
    }
    printf("\nSo o he 2:");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",mang[j]);
    }
}

void He8(int n)
{
    int mang[8],i=0,j;
    while(n!=0)
    {
        mang[i] = n%8;
        n = n/8;
        i++;
    }
    printf("\nSo o he 8:");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",mang[j]);
    }

}

void He16(int n)
{
    int c,i=0,j;
    char hex[16] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    char mang[8];
    while(n!=0)
    {
        c = n%16;
        n = n/16;
        mang[i] = hex[c];
        i++;
    }
    printf("\nSo o he 16:");
    for(j=i-1;j>=0;j--)
    {
        printf("%c",mang[j]);
    }
}

