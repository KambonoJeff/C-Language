#include <stdio.h>

int quotient(d,a){
	int q = d/a;
	return q;
	
}
int remainder(d,a){
	int r = d % a;
	return r;
}


int main() {
    int d, a;
    printf("Enter dividend: ");
    scanf("%d", &d);
    printf("Enter divisor: ");
    scanf("%d", &a);
    int result1 = quotient(d,a);
    int result2 = remainder(d,a);
    
    printf("Quotient = %d\n", result1);
    printf("Remainder = %d", result2);
    return 0;
}

