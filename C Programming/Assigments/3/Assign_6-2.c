#include <stdio.h>

typedef struct Complex
{
    float real;
    float img;
} Complex;

void add(Complex n1, Complex n2)
{
    float real_add = n1.real + n2.real;
    float img_add = n1.img + n2.img;
    printf("n1 + n2 = ");
    printf("%f ",real_add);
    printf("+j%f ",img_add);
}

int main()
{
    float a,b,c,d;
    printf("Enter first Complex Number: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("Enter second Complex Number: \n");
    scanf("%f",&c);
    scanf("%f",&d);
    Complex n1 = {a,b};
    Complex n2 = {c,d};
    printf("n1 = %f + j%f \n",n1.real,n1.img);
    printf("n2 = %f + j%f \n",n2.real,n2.img);
    add(n1,n2);
}

