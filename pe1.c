#include <stdio.h> 
int main() 
{
int i,a[1000],b[500],j=0,c=0,sum=0;
for(i=1;i<1000;i++)
{
	a[i]=i;
}
for(i=1;i<1000;i++)
	{

	if((a[i]%3)==0 || (a[i]%5)==0)
	{
		c++;
	}
	}
for(i=1;i<1000;i++)
{
	if((a[i]%3)==0 || (a[i]%5)==0)
	{
		for(j=0;j<c;j++)
		{
			b[j]=a[i];
			sum=sum+b[j];
		}
	}
}
sum=sum/c;
printf("%d\n",c);
printf("%d",sum);
return 0;
}
