#include<stdio.h>
double func_1(length_u, height){
	double ans1 = length_u * height;
	return ans1;
}
double func_3(trilen, h){
	
	double triArea = trilen * h;
	return triArea;
}
double func_2(length_l,length_u,height){
	double	trilen = length_l-length_u;
	double h =height;
	func_3(trilen, h);
}


class double area(){
	printf("This Function finds area of a trapezoid//\n")
	int height,length_u, length_l;
	printf("Enter the Height  :");
	scanf("%ld",&height);
	printf("Enter the upper length  :");
	scanf("%ld",&length_u);
	printf("Enter the lower length  :");
	scanf("%ld",&length_l);
	printf("processing information............")
	
	double rectangle = func_1(length_u, height);
	double triangle = func_2(length_l,length_u, height);
	double final = rectangle + triangle;

	printf("Area = %lf \n",final);
}
int main(){
	area();
}
