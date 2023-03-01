#include <stdio.h>
 
int main()
{ 
 float p,n;
 float r;
 float simpleint(float p,float r, float n);
 
 printf("Enter Principle Amount, Rate %% per Annum and Time\n");
 scanf ("%f %f %f", &p, &r, &n);
 simpleint(p,r,n);
 return 0;
}
 
 float simpleint(float p,float r, float n)
 {
 	float si;
 	si = p*n*r/100;
 	printf ("Simple Interest  = %5.2f\n", si);
 }
