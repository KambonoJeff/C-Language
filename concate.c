#include <stdio.h>
int main(){
	int number;
	printf("Enter an integer:\n");
	scanf ("%d", &number);
	// true statement if number is less than 0
	if(number<0){
		printf("You entered %d . This a negative number.\n",number);
		
	}
	else{
		printf("You entered %d . This a positive number.\n",number);

	
	}
		return 0;
}
