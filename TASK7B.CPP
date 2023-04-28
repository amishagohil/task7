#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int neutral;
	printf("enter neutral=");
	scanf("%d",&neutral);
	if (neutral>0)
	{
	     printf("the number is positive");
	}
	else if (neutral==0)
	{
	     printf("the number is neutral");
	}

	else if (neutral<0)
	{
	     printf("the number is nagative");
	}
	getch();
}