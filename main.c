#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i,j,k,n,max;
   int x,y;
   long int  mang[20][20];
   printf("Nhap cap cua ma tran:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           printf("Nhap phan tu a[%d][%d]:",i+1,j+1);
           scanf("%d",&mang[i][j]);
       }
   }

   max = mang[n-1][n-1];
   x=1;y=n-2;
   while(x<n && y>=0)
   {
        k=y+1;
        while(k<n)
        {
          if(mang[x][k]>max)  mang[x][k] = max;
          k++;
        }
       x++; y--;
   }

    printf("\nMa tran:\n");

   for(i=0;i<n;i++)
   {

       for(j=0;j<n;j++)
       {
           printf("%d\t",mang[i][j]);
       }
       printf("\n");
   }
   printf("\nPhan tu lon nhat cua nua duoi duong cheo phu la: %d",max);
}
