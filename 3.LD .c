#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{

{
    float a, b, precision;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the desired precision: ");
    scanf("%f", &precision);
    
    float x = a;
    while (x <= b) 
    {
        float fx = sin(x);
        printf("x: %f, f(x): %f\n", x, fx);
        x += precision;
    }

}
{
    float a=0.,b=2*M_PI,x,delta_x=1.e-2;
    
    float *buffer1;
    
    int NN = (b-a)/delta_x +1;
    buffer1 = (float*) malloc (NN * sizeof(float));
    
    printf("\tx\t\tsin(x)\t\tsin\'(x)\n");
    x = a;
    int i = 0;
    while(x<b)
    {
        //y=sin(x);
        printf("%10.2f\n",x);
        
        buffer1 [ i ] = x;
        
        x+= delta_x;
        i++;
    }
    
    i = 0;
    while(i<NN)
    {
      printf("%10.2f\n",buffer1[i]);
      i++;
    }
}
}

