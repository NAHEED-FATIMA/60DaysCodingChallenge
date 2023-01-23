#include<stdio.h>
#include<math.h>
 
float AOTCal(float, float, float);
 
main()
{
   float a, b, c, result;
 
   printf("\n Please Enter the three sides\n");
   scanf("%f%f%f",&a,&b,&c);
 
   result= AOTCal(a, b, c);
   printf("\nArea of triangle = %.2f\n", result);
 
   return 0;
}
 
float AOTCal( float a, float b, float c )
{
   float s, result;
 
   s = (a+b+c)/2;
   result = sqrt(s*(s-a)*(s-b)*(s-c));
   return result;
}
