#include <stdio.h>
#include <stdlib.h>

void main()
{
    int mang[15];
    int n,i;
    int tongday=0,tongduong=0,tongam=0,demduong=0,demam=0;
    float tb,tbd,tba;
    printf("So phan tu can nhap la:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Nhap gia tri phan tu thu %d:",i+1);
        scanf("%d",&mang[i]);
    }

    for(i=0;i<n;i++)
    {
        if(mang[i]>=0)
        {
            tongduong+=mang[i];
            demduong++;
        }
    }
    tbd =(float) tongduong/demduong;


    for(i=0;i<n;i++)
    {
        if(mang[i]<0)
        {
            tongam+=mang[i];
            demam++;
        }
    }
    tba = (float)tongam/demam;

    for(i=0;i<n;i++)
    {
        tongday+=mang[i];
    }
    tb=(float)tongday/n;

    printf("\nTong cac so duong: %d\nTong cac so am: %d",demduong,demam);
    printf("\nTrung binh cong cac so duong: %f\nTrung binh cong cac so am: %f",tbd,tba);
    printf("\nTrung binh cong day so: %f",tb);
}
