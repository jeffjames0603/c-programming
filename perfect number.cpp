#include <stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter a number to check if it is perfect number:");
	scanf("%d",&n);
	while (i<n)
	{
	if(n%i==0)
	sum=sum+i;
	i=i+1;
	}
	if (sum==n)
	printf("The number %d is a perfect number",n);
	else
	printf("The number %d is not a perfect number",n);
return 0;
} 
