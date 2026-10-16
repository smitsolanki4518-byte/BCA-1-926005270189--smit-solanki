#include<stdio.h>
#include<conio.h>
void main()
{
	int j;
	clrscr();
	printf("\n number\ square \cube");
	printf("\n--------------------\n");
	j=1;
	while(j<=5)
	{
		printf("\n %d %d %d",j,j*j,j*j*j);
		j++;
	}
	getch();
}