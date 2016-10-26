#include <stdio.h>
#include <stdlib.h>

void main()
{
    float GDP,tocdo,GDPn;
    int nam=2001;
    printf("Nhap vao GDP nam 2000:");
    scanf("%f",&GDP);
    printf("Nhap vao toc do tang truong binh quan:");
    scanf("%f",&tocdo);
    GDPn = GDP;
    do
    {
        GDPn += GDPn*tocdo/100;
        printf("\nNam %d  GDP :%f",nam,GDPn);
        nam++;
    }
    while(GDPn<(2*GDP));

}
