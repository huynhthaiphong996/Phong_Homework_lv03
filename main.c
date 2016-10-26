#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int x,i,bac;
    int hs[30],kq=0;
    printf("Nhap bac cua phuong trinh:");
    scanf("%d",&bac);
    i=bac;
    for(i;i>=0;i--)
    {
        printf("\nNhap he so cho x^%d:",i);
        scanf("%d",&hs[i]);
    }
    printf("\nNhap gia tri cua x:");
    scanf("%d",&x);

    printf("\nPhuong trinh la:\n");
    i= bac;
    for(i;i>=0;i--)
    {
        if(i==bac) printf("%dx%d",hs[bac],bac);
       else if(i==0) printf("+%d",hs[0]);
       else if(i==1) printf("+%dx",hs[1]);
        else{
            printf("+%dx%d",hs[i],i);
        }

    }

i=bac;
    for(i;i>=0;i--)
    {
        kq += hs[i]*pow(x,i);
    }
    printf("\nKet qua: %d",kq);
}
