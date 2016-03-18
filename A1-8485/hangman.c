#include <stdio.h>

void hangman(int n)
{
	
	if (n==0)
	{
		printf("++--- \n| \n|\n|\n");	
	} 
	else if (n==1)
	{
		printf("++--- \n|   O \n|\n|\n");
	}
	else if (n==2)
	{
		printf("++--- \n|   O \n|   |\n|\n");
	}
	else if (n==3)
	{
		printf("++--- \n|   O \n|  /|\n|\n");
	}
	else if (n==4)
	{
		printf("++--- \n|   O \n|  /|\\ " );
		printf("  \n|\n");
	}
	else if (n==5)
	{
		printf("++--- \n|   O \n|  /|\\ " );
		printf("  \n|  /\n");
	} 
	else if (n==6)
	{
		printf("++--- \n|   O \n|  /|\\ " );
		printf("  \n|  / \\\n");
	} 
}

int main(){
	int n;
	/* elegxos swsths leitoyrgias ths hangman */
	do
	{
		printf("Dwse n \n");
		scanf("%d",&n);
	}while(n<0 || n>6);
	hangman(n);
}
