#include <stdio.h>
int main(){
	int number1, number2;
	printf("Enter the first integer     :");
	scanf ("%d", &number1);
	printf("Enter the second integer     :");
	scanf ("%d", &number2);
	// true statement if number is less than 0
	if(number1==number2){
		printf("Results %d = %d .\n",number1,number2);
		
	}
	else if(number1>number2){
		printf("Result: %d > %d .\n",number1,number2);
	}
	else if(number1<number2){
		printf("Result: %d < %d .\n",number1,number2);

	
	}
		return 0;
}
