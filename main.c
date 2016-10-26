#include <stdio.h>
#include <stdlib.h>

void main(){
float a=0,b=1;
int i=1;
float h,eps,s=0,x[100],y[100],z[100];
printf("Nhap Eps:\n");
scanf("%f",&eps);
float Tinh(float x){
    return (sin(x*x)/x);
}
h=(b-a)/100;
while(i<100)
{
   x[i]=a+i*h;
   y[i]=a+(i+1)*h;
   z[i]=a+(i+2)*h;
   s+=(Tinh(x[i])+Tinh(y[i]))/2;
   if(fabs(h*(Tinh(y[i])+Tinh(z[i])))<=2*eps) break;
   else i++;
}
printf("Tich phan can tinh la : %f",s*h);
}

