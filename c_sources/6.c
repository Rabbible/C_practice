#include<stdio.h>
int main(void)
{
	long int i,j,s,n;
	printf("Please enter n:");
	scanf("%ld",&n);
	j=1;
	s=0;
	for(i=1;i<=n;i++)
	{
		j=j*i;
		s=s+j;
	}
	printf("s=%ld\n",s);
	return 0;
 } 