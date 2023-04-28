#include <stdio.h>
int main(){
	int number;
	printf("Enter an integer     :");
	scanf ("%d", &number);
	// true statement if number is less than 0
	if(number%2==0){
		printf("%d is an even integer.\n",number);
		
	}
	else{
		printf("%d is a odd integer.\n",number);

	
	}
		return 0;
}
