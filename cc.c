#include<stdio.h>
int main()
{
	int i,n,j,r,max=0;
	int a[n];
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			r=(a[i])&(a[j]);
			if(r>max)
			{
				max=r;
			}
		}
	}
	printf("%d",r);
	return 0;
}
