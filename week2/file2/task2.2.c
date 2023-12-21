#include <stdio.h>

int main (void){
	int id;
	int password;
	int counter;
	printf("enter your id\n");
	scanf("%d",&id);
	if(id==3020505)
	{
		printf("enter your password\n");
		scanf("%d",&password);
		if (password!=1234){
			for(counter=1;counter<=2;counter++)
		{
			printf("enter the right password\n");
			scanf("%d",&password);
		}
		printf("no more tries\n");
		}else printf("welcome\n");
		
	}else printf("You are not registered\n");
		
	return 0;
}