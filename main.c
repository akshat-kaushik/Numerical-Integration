#include<stdio.h>
#include<math.h>
float f(float x);// define funtion.
float f(float x)
    {
    return (1/(1+x));
    }
int main ()
{
    float a , b , x , y=0 , h ;
    int n , i , c ;
    printf("enter '0' for Trapezoidal rule\n");
    printf("enter '1' for Simpson's 1/3 rule\n");
    printf("enter '2' for Simpson's 3/8 rule\n");
    scanf("%d",&c);
    if (c==0)
    {
        printf("enter minimum value");
        scanf("%f",&a);
        printf("enter maximum value");
        scanf("%f",&b);
        printf("enter n");
        scanf("%d",&n);
        h=(b-a)/n;
        y=f(a)+f(b);// To calculate the minimum and maximum value.
        for (i=1;i<=n-1;i++)
        {
            x=a+i*h;// To calculate the f(x).
            y=y+(2*f(x));// To add both (a+b) and 2*(sum of remaining ordinates).
        }
        printf("Sum of ordinates :%f\n", y);
        y=y*(h/2);// To calculate the value of f(x)dx.
        printf("area under the curve :%f\n", y);
    }
    else if (c==1)
    {
        printf("enter minimum value");
        scanf("%f",&a);
        printf("enter maximum value");
        scanf("%f",&b);
        printf("enter n");
        scanf("%d",&n);
        h=(b-a)/n;
        y=f(a)+f(b);// To calculate the minimum and maximum value.
        for (i=1;i<=n-1;i++)
        {
            if(i%2==0)
            {
                x=a+i*h;
                y=y+(2*f(x));
            }
            else
            {
                x=a+i*h;
                y=y+(4*f(x));
            }
        
        }
        y=y*(h/3);// To calculate the value of f(x)dx.
        printf("area under the curve :%f\n", y);
    }
    else
    {
        printf("enter minimum value");
        scanf("%f",&a);
        printf("enter maximum value");
        scanf("%f",&b);
        printf("enter n");
        scanf("%d",&n);
        h=(b-a)/n;
        y=f(a)+f(b);// To calculate the minimum and maximum value.              
        for (i=1;i<=n-1;i++)
        {                   
            if(i%3==0)
            {
                x=a+i*h;
                y=y+(2*f(x));
            }
            else
            {
                x=a+i*h;
                y=y+(3*f(x));
            }
        }
        y=y*((3*h)/8);// To calculate the value of f(x)dx.
        printf("area under the curve :%f\n", y);
    }
    return 0;
}
