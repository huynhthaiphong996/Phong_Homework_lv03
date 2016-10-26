#include <stdio.h>
#include <stdlib.h>

void main()
{
    int mang[15];
    int n,i,j,min,max,thutumax=1,thutumin=1;
    printf("So phan tu can nhap la:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Nhap gia tri phan tu thu %d:",i+1);
        scanf("%d",&mang[i]);
    }

    max = mang[0];
    min = mang[0];

    for(i=0;i<n;i++)
    {
        if(max<mang[i])
        {
            max = mang[i];
            thutumax = i+1;
        }
    }

    for(j=0;j<n;j++)
    {
        if(min>mang[j])
        {
            min = mang[j];
            thutumin = j+1;
        }
    }
    printf("\nPhan tu thu %d = %d la gia tri Max\nPhan tu thu %d = %d la gia tri Min",thutumax,max,thutumin,min);

}
