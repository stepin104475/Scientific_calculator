#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int a;
float f;
float sine(float  x);
float cosine(float x);
float tangent(float x);
float sineh(float x);
float cosineh(float x);
float tangenth(float x);
float logten(float x);
float squareroot(float x);
float exponent(float x);
float power(float x,float y);
float addition(float x,float y);
float subtraction(float x,float y);
float multiplication(float x,float y);
float division(float x,float y);
//float modulus(float x,float y);
int factorial(int x);
float absolute(float x,float y);
int main()
{
    float x,y,a,answer;
    int n,fact,ans;
    int z;
    printf("What do you want to do?\n");
    printf("1.sin 2.cos 3. tan 4. sinh 5.cosh 6.tanh 7.1og10 8. square root. 9.exponent 10.power.");
    scanf ("%d",&n);
    if (n<9 && n>0)
    {
        printf("\n What is x? ");
        scanf("%f",&x);
        switch (n)
        {
            case 1: answer = sine(x);       break;
            case 2: answer = cosine(x);     break;
            case 3: answer = tangent(x);    break;
            case 4: answer = sineh(x);      break;
            case 5: answer = cosineh(x);    break;
            case 6: answer = tangenth(x);   break;
            case 7: answer = logten(x);     break;
            case 8: answer = squareroot(x); break;
            case 9: answer = exponent(x);   break;
        }
    }
        else if(n>9 && n<16)
        {
            printf("\n What is x and y? ");
        scanf("%f%f",&x,&y);
          switch(n)
          {

             case 10: answer=addition(x,y);
                      break;

            case 11: answer=subtraction(x,y);
                      break;

            case 12: answer=multiplication(x,y);
                      break;

            case 13: answer=division(x,y);
                      break;

            /*case 14: modulus(x,y);
                      break;*/
            case 14: answer=absolute(x,y) ;
                     break;
          }

    if (n==15)
    {
        printf("What is x and y?\n");
        scanf("%f%f",&x,&y);
        answer = power(x,y);
            }



    }
    if(n==16)
    {
       printf("What is fact\n");
        scanf("%d",&fact);
        ans = factorial(fact);

    }
    if (n>0 && n<16)
        printf("%f",answer);
    else if(n==16)
         printf("%d",ans);
    else
        printf("Wrong input.\n");
    return 0;
 }

float sine(float x)
{
    return (sin (x*PI/180));
}
float cosine(float x)
{
    return (cos (x*PI/180));
}
float tangent(float x)
{
    return (tan(x*PI/180));
}
float sineh(float x)
{
    return (sinh(x));
}
float cosineh(float x)
{
    return (sinh(x));
}
float tangenth(float x)
{
    return (sinh(x));
}
float logten(float x)
{
    return (log10(x));
}
float squareroot(float x)
{
    return (sqrt(x));
}
float exponent(float x)
{
    return(exp(x));
}
float power(float x, float y)
{
    return (pow(x,y));
}
float addition(float x, float y)
{
    return x+y;
}

float subtraction(float x, float y)
{
    return x-y;
}

float multiplication(float x, float y)
{
    return x*y;
}

float division(float x, float y)
{
if(y==0)
  return -1;
else
    return x/y;

}
/*
float modulus(float x, float y)
{
    a = x % y;
    f = (float)a;
    return f;

}
*/

int factorial(int z)
{


    if (z==0)
    {
        return 1;
    }
    if(z==1){
        return 1;
    }
    else

    return z*factorial(z-1);
}
float absolute(float x,float y)
{

    return abs(x-y);
}

