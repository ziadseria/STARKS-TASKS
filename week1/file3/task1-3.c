#include <stdio.h>

int main(void){
	char c;
	printf("please enter some character\n");
	scanf("%c",&c);
	printf("character='%c'\n",c);
	printf("ascii=%d\n",c);
	c++;
	printf("next character='%c'\n",c);
	c-=2;
	printf("previous character='%c'\n",c);
	
	
}