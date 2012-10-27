Program Description:calculate the cosh, sinh, and tanh based off user imput


#include<math.h>
#include<stdio.h>
int main()
{
 float input; //radian value
 float cosh; //hyperbolic cosine
 float sinh; //hyperbolic sine
 float tanh; //hyperbolic tangent

 printf("\nEnter value of x in radians: ");
 scanf("%f", &input);

 cosh = (.5) * (expf(input) + expf(-input)); //function of hyperbolic cosine
 sinh = (.5) * (expf(input) - expf(-input)); //function of hyperbolic sine
 tanh = ((expf(input) - expf(-input))/(expf(input) + expf(-input))); //function of hyperbolic tangent

 printf("\nGiven the following value of x:  %.7f",input);
 printf("\nCalculated hyperbolic cosine:    %.7f",cosh);
 printf("\nCalculated hyperbolic sine:      %.7f",sinh);
 printf("\nCalculated hyperbolic tangent:   %.7f\n",tanh);

 return(0);
}

