#include <stdio.h>
#include <stdlib.h>

void main()
{
   unsigned int n;
   int tren,duoi,trai,phai,A[10][10];
   int x,y,i,j;
   int gioihan,dem;
   printf("Nhap cap cua ma tran:");
   scanf("%d",&n);
   gioihan = n*n;
    tren =0; duoi = n-1;
    trai = 0 ; phai = n-1;
    dem = 1;
    while(dem <= gioihan)
    {
        x = tren;

        for(y=trai;y<=phai;y++)
            if(dem<=gioihan)
        {
            A[x][y] = dem++;

        }

        tren++;

        y= phai;
        for(x=tren;x<=duoi;x++)
            if(dem<=gioihan)
        {
            A[x][y] = dem++;

        }

        phai--;
        x= duoi;

        for(y=phai;y>=trai;y--)
            if(dem<=gioihan)
        {
            A[x][y] = dem++;

        }

        duoi--;

        y = trai;
        for(x=duoi;x>=tren;x--)
            if(dem<=gioihan)
        {
            A[x][y] = dem++;

        }
        trai++;
    }

    printf("\nKet qua:\n");
    for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=n-1;j++)
            {
                printf("%d  ",A[i][j]);
            }
            printf("\n");
        }
}
