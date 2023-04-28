#include <stdio.h>
int main(){
	int number;
	printf("Enter an integer:\n");
	scanf ("%d", &number);
	// true statement if number is less than 0
	if(number<0){
		printf("%d is an negative integer.\n",number);
		
	}
	else{
		printf("%d is a positve integer.\n",number);

	
	}
		return 0;
}
