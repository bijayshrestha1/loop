#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,x=0,k;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(k=3;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			x++;
			printf("%d ",x);
		}
		printf("\n");
	}
	getch();
	}
