#include <stdio.h>

int main (void){
	float TestOne ;
	float TestTwo ;
	float Sum = 0;
	while(1){
		printf("enter two numbers\n");
		scanf("%f %f",&TestOne,&TestTwo);
		Sum = TestOne + TestTwo;
		printf("Summation = %.2f\n",Sum);
		}
	
}