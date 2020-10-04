#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,n;
printf("Enter the number of stairs you need\n");//number of stair cases we want 
scanf("%d",&n);
printf("\n");
for(i=1;i<=n;i++)//outer loop for number of stair case
{
	for(j=1;j<=i;j++)//loop for printing "01"
	{
		printf("01");
	}
	printf("\n");
}
return 0;
}
