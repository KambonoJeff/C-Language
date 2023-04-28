#include<stdio.h>
#include<conio.h>
int one(){
	printf("---------------------------------------------------------\n");
	
	printf("1. C program to find size of int, float, double and char?\n\n");
	printf("-------------------------------------------------------------\n");
	
		int a;
		float b;
		double c;
		char d;
		printf(" The size of a is %d\n", sizeof(a));
		printf(" The size of b is %d\n", sizeof(b));
		printf(" The size of c is %d\n", sizeof(c));	
		printf(" The size of d is %d\n\n", sizeof(d));
		start();
	
}
int two(){
	printf("------------------------------------------------------------\n");
	
	printf("2. C program to find remainder and quotient of two integers?\n\n");
	printf("-----------------------------------------------------------------\n");
	
	int q,r,dividor,divisor;
	printf("Enter The Dividor : :");
	scanf("%d",&dividor);
	printf("Enter The Divisor  :");
	scanf("%d",&divisor);
	q = dividor/divisor;
	r = dividor%divisor;
	printf("\n Quotient = %d \n Remainder = %d\n",q,r);
	start();
	
	
}
int three(){
	int a,b;
	printf("----------------------------------------------\n");
	printf("3. C program to swap two integer numbers?\n\n");
	printf("------------------------------------------------\n");
	
	printf("Enter the Value of a  :");
	scanf("%d",&a);
	printf("Enter the Value of b   :");
	scanf("%d",&b);
	
	
	printf("\nBEFORE SWAP : a = %d b=%d\n",a,b);
	int x =a;
	a=b;
	b=x;
	
	printf("\nAFTER SWAP : a = %d b=%d\n",a,b);
	start();
	
	
}
int four(){
	int radius;
	float pie=3.14;
	
	printf("------------------------------------------------\n");
	printf("4. C program to calculate area of a circle?\n\n");
	printf("----------------------------------------------------\n");
	printf("\nEnter The Radius of the cirle  :");
	scanf("%d",&radius);
	float area = pie*radius*radius;
	printf("\n\nThe area of the cirle is : %f\n",area);
	start();
	
	
}
int five(){
	int a,b,c;
	
	printf("-------------------------------------------------------------------------\n");
	printf("5. Write a c statement to find the largest number among three numbers.\n\n");
	printf("-------------------------------------------------------------------------\n");
	printf("\nEnter Your first Values :");
	scanf("%d",&a);
	printf("\nEnter Your second Values :");
	scanf("%d",&b);
	printf("\nEnter Your third Values :");
	scanf("%d",&c);
	
	
	
	if(a>b){
		if(a>c){
			printf("\n%d is The Greatest number !\n",a);
		}
		else if(c>b){
			printf("\n%d is The Greatest number !\n",c);
		
		}
	}
	else if(b>c){
		printf("\n%d is The Greatest number !\n",b);
		
	}
	start();	
	
}
int six(){
	char input;
	printf("-------------------------------------------------------------------------\n");
	printf("6. Write C Program to Check Whether a Character is an Alphabet or not.\n\n");
	printf("-------------------------------------------------------------------------\n");
	printf("Enter Your Input Value  :");
	scanf("%d",&input);
	if((input >= 'A'&& input <='Z')||(input >='a'&& input <='z')){
		printf("Your Input \" %c \" is a Alphabet  .\n",input);
	}
	else{
		printf("Your Input is a Number  .\n");
	}

	start();
}
int seven(){
	int a,b,c=0;
	printf("-------------------------------------------------------------------------\n");	
	printf("7. Calculate the Sum of Natural Numbers\n\n");
	printf("-------------------------------------------------------------------------\n");
	printf("Enter a Positive Value  :");
	scanf("%d",&a);
	if(a<=0){
		printf("Enter a Positive Value  :");
		scanf("%d",&a);	
		
	}
	b=0;
	while(b<=a){
		c=c+b;
		b++;
	}
	printf("The sum of these first %d natural numbers is %d\n",a,c);
	start();
	
	
}
int while_do(input){
	if (input==1){ one(); }
	else if (input==2){ two(); }
	else if (input==3){ three(); }
	else if (input==4){ four(); }
	else if (input==5){ five(); }
	else if (input==6){ six(); }
	else if (input==7){ seven(); }
	else if (input==8){ return 0; }
	
}
int start(){
	int input;
	printf("----------------------------------\n");
	printf("----------------------------------\n");
	printf("-->Read The following and choose for a solution\n\n");
	printf("1. C program to find size of int, float, double and char?\n\n");
	printf("2. C program to find remainder and quotient of two integers?\n\n");
	printf("3. C program to swap two integer numbers?\n\n");
	printf("4. C program to calculate area of a circle?\n\n");
	printf("5. Write a c statement to find the largest number among three numbers.\n\n");
	printf("6. Write C Program to Check Whether a Character is an Alphabet or not.\n\n");
	printf("7. Calculate the Sum of Natural Numbers\n\n");	
	printf("----------------------------------\n\n");
	printf("8. EXIT!\n");
	printf("----------------------------------\n\n");
	printf("Choose a question number  : ");
	scanf("%d",&input);
	
	while_do(input);
	
}
int main(){
	start();
	
}
