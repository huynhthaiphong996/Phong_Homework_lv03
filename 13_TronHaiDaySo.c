#include <stdio.h>
#include <stdlib.h>

void main()
{
   int A[100],B[100],C[100];
   int i,j,n,m,k,check,temp;
   int x,y,s;
   printf("Nhap so phan tu cua mang A:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("\nNhap gia tri cua phan tu A[%d]:",i+1);
       scanf("%d",&A[i]);
   }

   printf("\nNhap so phan tu cua mang B:");
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
       printf("\nNhap gia tri cua phan tu B[%d]:",i+1);
       scanf("%d",&B[i]);
   }
   sapxep(A,n);
   sapxep(B,m);

   printf("\nDay A: ");
   inday(A,n);
   printf("\nDay B: ");
   inday(B,m);
   printf("\nDay C: ");
    tronday(A,n,B,m,C);


}

void sapxep(int mang[100],int n)
{
    int i,j,khoa,temp,check;
    for(i=0;i<n;i++)
    {
        khoa = mang[i];

            for(j=0;j<n;j++)
            {
                if(khoa < mang[j])
                {
                    temp = mang[i];
                    mang[i] = mang[j];
                    mang[j] = temp;
                    khoa = mang[i];
                }
            }

    }
}
void inday(int mang[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",mang[i]);
    }
}
void tronday(int A[100],int n,int B[100],int m,int C[100])
{
    int k,j=0,i=0;

    for(k=0;k<n+m;k++)
    {

        if(A[i]>B[j])
        {
            C[k] = B[j];
            j++;
        }else
        {
            C[k] = A[i];
            i++;
        }
    }


    inday(C,m+n);
}
