#include <stdio.h>
#define N 21
#include <string.h>  

int main()
{
	int n=0,i, length, t=0, flag=1, gram=0;
	char string[N], guess, word[N], temp;
	
	for (i=0;i<N;i++)
	{
		word[i]==0;
	}

	printf("Insert word (<20 characters) \n");
	fgets(string, N, stdin);
	
	for (i=0;i<20;i++)
	{
		if (string[i]== NULL){
	
			length=i-1;
			break;
		}
	}
	
	while(n<6)
	{
		
		if (t==0) /* 1st try*/
		{
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); /* Clear screen */
			hangman(0);
			printf("the word is: ");
			for (i=0;i<length;i++)
			{
				printf("*");	
			}
				
		}
		
		printf("\nenter letter guess:\n");
		t++;
		guess = getchar();
		fflush(stdin);
		flag=1;
		
		for (i=0;i<length;i++)
		{
			temp=string[i];
			if (guess==temp)
			{
				word[i]=guess;
				gram++;
				flag=0;
				
			}
		}
		
		if (flag==1)
		{
			n++;
			printf("Sorry \n");
			hangman(n);	
			
		}
		else
		{
			printf("Bravo! \n");
			
		}
		
		printf("the word is:");
		for (i=0;i<length;i++)
		{
			if (word[i]==string[i])
			{
				printf ("%c", string[i]);
			}else
			{
				printf("*");
			}
		}
		if (gram==length)
		{
			printf("\nYou won! Well done!\n");
			break;
		}
		if (n==6)
		{
			printf("\n Sorry! You lost! Try again!\n");
		}
		
		
	}
		
}

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
