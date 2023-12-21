#include <stdio.h>

int main (void){
	int Vv,Aa,Bb,Cc;
	printf("enter values\n");
	scanf("%d %d %d %d",&Vv,&Aa,&Bb,&Cc);
	/* int remainingA = Vv;
	 int remainingB = Vv;
	 int remainingC = Vv;*/
	while (1) 
	  {
        Vv -= Aa;
		if (Vv < Aa)
		{
            printf("F.\n");
            break;
		}
        Vv -= Bb;
	    if (Vv < Bb) 
		{
            printf("M.\n");
            break;
        }
        Vv -= Cc;
		if (Vv < Cc) 
		{
            printf("T.\n");
            break;
        }

        
        
          
	  }
	  return 0;
    }

    
