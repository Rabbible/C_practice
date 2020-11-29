#include<stdio.h>
int main()
{
  int i,sum;
  printf("Please enter i:");
  scanf("%d",&i);
  sum=0;
  do
 {
   sum=i+sum;
   i++;
 }while(i<=10);
printf("sum=%d\n",sum);
return 0;
}