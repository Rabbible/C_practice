#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,j,k;
    for(i=100;i<1000;i++)
    {
        a=i/100;
        b=i%100/10;
        c=i%100%10;
        j=pow(a,3)+pow(b,3)+pow(c,3);
        if(j==i)
        printf("%5d",i);
    }
    return 0;
}