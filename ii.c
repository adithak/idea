#include <stdio.h>
int main(void) {
	long int a[100000];
	long int i,n,j;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==0)
			{
				printf("%ld %ld",a[i],a[j]);
				break;
			}
		}
	}
	return 0;
}
