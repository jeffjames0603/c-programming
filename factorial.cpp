#include <stdio.h>

int main()
{
	int a=1,n,f=1;
	printf("Enter the range to print the factorial:");
	scanf("%d",&n);
	while(a<=n){
		f=f*a;
		a++;
	}
	printf("%d",f);
} n#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The given number is even");
	}
	else
	printf("The given number is odd");
	
} 
