#include<stdio.h>

int main() {
   float radius, area;
	printf("-----------------------------------------\n");
  	printf("Enter the radius of Circle : ");
   	scanf("%d", &radius);

   area = 3.14 * radius * radius;
   printf("Area of Circle : %f", area);

   return (0);
}
