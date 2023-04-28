#include<stdio.h>
double areaFunction(diameter){
	double pie = 3.142;
	double radius = diameter/2;
	double area = pie * radius * radius;
	printf(" The Area of the circle is %lf",area);
	
}
double details(){
	double diameter;
	
	printf("Enter the Diameter:\n");
	scanf("%lf",&diameter);
	areaFunction(diameter);
	
}

int main(){
	details();
	
}
