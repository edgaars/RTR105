#include<stdio.h>
#include<math.h>

void main()
{
{
    double a, b;
    int precision;
    printf("Enter the value of a: ");
    scanf("%lf", &a);
    printf("Enter the value of b: ");
    scanf("%lf", &b);
    printf("Enter the precision: ");
    scanf("%d", &precision);
    printf("a = %lf\nb = %lf\nprecision = %d\n", a, b, precision);
}

{
    float a=0.,b=M_PI/2,eps=1.e-3,h,integr1=0.,integr2;
    int k,n = 2;
    
    integr2=(b-a)*(sin(a))+(sin(b))/n;
    while(fabs(integr2-integr1)>eps)
    {
        n*=2;
        h=(b-a)/n;
        integr1=integr2;
        integr2=0;
        for(k=0;k<n;k++)
          integr2+=h*sin(a+(k+0.5)*h);
    }
    printf("Integraalja veertiba: %.2f\n",integr2);


}
}

