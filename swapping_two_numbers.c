// Swapping two numbers using third variable

#include<stdio.h>
int main ()

{
	int a,b,x;
	printf("enter the value of a and b=");
	scanf("%d%d",&a,&b);
	x=a;
	a=b;
	b=x;
	printf("values after swapping are a=%d\nand b=%d",a,b);
	return 0;
	
}

// Swapping without using third variable

#include<stdio.h>
int main() 

{
	int a,b;
	printf("enter the values of a and b = ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("values after swapping are a=%d \n b=%d",a,b);
	return 0;
}
