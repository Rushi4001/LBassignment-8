#include<stdio.h>

void display(int ino)
{
	int icnt=0;
	if (ino<0)
	{
		ino=-ino;
	}
	for(icnt=1;icnt<=ino;icnt++)
	{
		if(icnt%2!=0)
		{
			printf("%d\t",icnt);
		}			
	}
}
int main() 
{ 
	int iValue = 0; 
	printf("Enter number\n"); 
	scanf("%d",&iValue); 
	display(iValue); 
	return 0;
}