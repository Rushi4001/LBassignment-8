#include<stdio.h>

void pattern(int ino)
{
	int icnt=0;
	if (ino<0)
	{
		ino=-ino;
	}
		for(icnt=1;icnt<=ino;icnt++)
		{
			printf("$\t");
			if(icnt<=ino)
			{
				printf("*\t");
			}
			
		}	
	
}
int main() 
{ 
	int iValue = 0; 
	printf("Enter number\n"); 
	scanf("%d",&iValue); 
	pattern(iValue); 
	return 0;
}