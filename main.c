#include <stdio.h>
#include <stdlib.h>

void main()
{
   int n,x,y,i, dem=0;
   int toado[10][2];
   printf("Cac diem can nhap toa do la:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Nhap toa do x cua diem thu %d:",i+1);
       scanf("%d",&toado[i][0]);
       printf("Nhap toa do y cua diem thu %d:",i+1);
       scanf("%d",&toado[i][1]);
   }

   for(i=0;i<n;i++)
   {
       if(toado[i][0]>0 && toado[i][1]>0)
       {
            printf("\nDiem thu %d thuoc goc phan tu thu I.",i+1);
            dem++;
       }
       else printf("\nDiem thu %d khong thuoc goc phan tu thu I.",i+1);
   }
   printf("\nTong cac diem thoa man yeu cau la:%d",dem);
}
