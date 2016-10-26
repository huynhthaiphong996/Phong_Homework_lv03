#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n=0;
    float x,eps,sinx,temp;
   printf("Nhap vao goc:");
   scanf("%f",&x);
   printf("Nhap do chinh xac  vd:0.000001    :");
   scanf("%f",&eps);
   x = x*3.14/180;
   sinx = x;
   temp = x;
   while(temp > eps || temp < (-eps) )
   {
       n++;
       temp = -temp*x*x/(2*n*(2*n+1));
       sinx = sinx + temp;
   }
   printf("Ket qua: %f",sinx);
}
