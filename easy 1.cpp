#include<stdio.h>
int main(){
	int a,b;
	int c;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	printf("enter the choice of the operation:(1,2,3,4)");
	scanf("%d",&c);
	if (c==1){
		printf("the addition of the number:%d",a+b);
	}else if(c==2){
		printf("the subtraction of the nubmer:%d",a-b);
	}else if(c==3){
		printf("the division of the number:%d",(float)a/b);
	}else if(c==4){
		printf("the multiplication of the number:%d",a*b);
	}else{
		printf("invalid choice of input");
	}
	return 0;
}
