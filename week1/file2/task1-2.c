#include <stdio.h>

int main(void){
	float x=0,y=0;
	printf("enter two float numbers.\n");
	scanf("%f %f",&x,&y);
	printf("x= %.2f y=%.2f\n",x,y);
	float sw=0;
	sw=x;
	x=y;
	y=sw;
	printf("x= %.2f y=%.2f\n",x,y);
}