#include <stdio.h>
#include <stdlib.h>

void main()
{
    int m ,n ,p , i,j,k;
    int A[10][10], B[10][10], C[10][10];
    printf("Nhap hang cua ma tran A:");
    scanf("%d",&n);
    printf("\nNhap cot cua ma tran A va hang cua ma tran B:");
    scanf("%d",&m);
    printf("\nNhap cot cua ma tran B:");
    scanf("%d",&p);

    printf("\nNhap cac phan tu cua ma tran A:");
    nhapmatran(A,n,m);
    printf("\nNhap cac phan tu cua ma tran B:");
    nhapmatran(B,m,p);

    for(i=0;i<n;i++)
    {
        for (j=0;j<p;j++)
        {
            C[i][j] =0;
            for(k=0;k<m;k++)
            {
                C[i][j]+= A[i][k]*B[k][j];
            }
        }
    }
    printf("\nMa tran A:\n");
    inmatran(A,n,m);
    printf("\nMa tran B:\n");
    inmatran(B,m,p);
    printf("\nMa tran C:\n");
    inmatran(C,n,p);

}

void nhapmatran(int mang[10][10],int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("\nNhap vao phan tu cua [%d][%d]:",i+1,j+1);
            scanf("%d",&mang[i][j]);
        }
    }
}

void inmatran(int mang[10][10],int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",mang[i][j]);
        }
        printf("\n");
    }
}
