#include<stdio.h>
int main(){
	float a;
	float b;
	float c;
	printf("Enter the three numbers to determine the largest and smallest value: \n");
	scanf("%f%f%f", &a,&b, &c);
	if(a>b){
		if(a>c){
			printf("%f is the greatest number",a);
		}
		else if(c>b){
			printf("%f is the greatest number",c);
		}
	}else if(b>b){
		printf("%f is the greatest number",b);
	}
}
