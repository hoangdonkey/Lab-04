#include <stdio.h>
void main(){

	int num1, num2;
	num1 = 77;
	num2 = 90;
	if(num1 == num2)
		printf("\nThe number are equal");
	else if(num1 < num2)
		printf("\nThe larger number is: %d", num1);
	else
		printf("\nThe larger number	is: %d", num2);
	
}