#include<stdio.h>
int main(){
	double a;
	double b;
	printf("Enter two numbers to be swapped :\n");
	scanf("%lf", &a);
	printf("Enter the seconde value:\n");
	scanf("%lf",&b);
	printf("the values before the swap:\n a = %lf\n b = %lf\n",a , b);
	
	double x = a;
	a = b;
	b = x;
	printf("The new values after swap:\n a = %lf\n b = %lf\n", a,b);
	return 0;
}
