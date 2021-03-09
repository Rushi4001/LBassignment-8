#include<stdio.h>

void multipledisplay(int ino)
{
	int icnt=0;
	int mult=0;
	if (ino<0)
	{
		ino=-ino;
	}
	for(icnt=1;icnt<=5;icnt++)
	{
	
		mult=mult+4;
	    printf("%d\t",mult);
		
	}
}
int main() 
{ 
	int iValue = 0; 
	printf("Enter number\n"); 
	scanf("%d",&iValue); 
	multipledisplay(iValue); 
	return 0;
}