#include <stdio.h>

int main(void){
	int x=0;
	char y=0;
	float z=0;
	printf("please enter the values.\n");
	scanf("%d %c %f",&x,&y,&z);
	printf("x=%d y=%c z=%.2f\n",x,y,z);
}