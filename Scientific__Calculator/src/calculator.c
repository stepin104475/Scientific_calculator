#include <calculator.h>
#include <math.h>
#define PI = 3.14159265;

float sine(float operand1)
{
    return (sin (operand1*PI/180));
}
float cosine(float operand1)
{
    return (cos (operand1*PI/180));
}
float tangent(float operand1)
{
    return (tan(operand1*PI/180));
}
float sineh(float operand1)
{
    return (sinh(operand1));
}
float cosineh(float operand1)
{
    return (sinh(operand1));
}
float tangenth(float operand1)
{
    return (sinh(operand1));
}
float logten(float operand1)
{
    return (log10(operand1));
}
float squareroot(float operand1)
{
    return (sqrt(operand1));
}
float exponent(float operand1)
{
    return(exp(x));
}
float power(float operand1, float operand2)
{
    return (pow(operand1,operand2));
}
float addition(float operand1, float operand2)
{
    return operand1+operand2;
}

float subtraction(float operand1, float operand2)
{
    return x-y;
}

float multiplication(float operand1, float operand2)
{
    return operand1*operand2;
}

float division(float operand1, float operand2)
{
if(operand1==0)
  return -1;
else
    return operand1/operand2;

}
/*
float modulus(float x, float y)
{
    a = x % y;
    f = (float)a;
    return f;

}
*/

int factorial(int operand3)
{


    if (operand3==0)
    {
        return 1;
    }
    if(z==1){
        return 1;
    }
    else

    return operand3*factorial(operand3-1);
}
float absolute(float operand1,float operand2)
{

    return abs(operand1-operand2);
}

