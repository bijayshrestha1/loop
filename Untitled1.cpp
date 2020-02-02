#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=(5-i);k++)
		{
			printf("\t");
		
		}
		for(j=1;j<=(2*i-1);j++)
		{
	
	if(j<=i)
	{
		printf("%d\t",j);
	}
	else{
		
	printf("%d\t",(i*2-j));
}
}

printf("\n");
}
return(0);
}
