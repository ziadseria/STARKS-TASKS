#include <stdio.h>

int main(void){
	int x,y;
	printf("please enter two numbers\n");
	scanf("%d %d",&x,&y);
	float sum = x+y;
	float sub = x-y;
	float mul = x*y;
	float div = x/y;
	printf("sum=%.2f sub=%.2f mul=%.2f div=%.2f",sum,sub,mul,div);
	
	
}