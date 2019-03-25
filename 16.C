#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,n,a[100],b=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			b=0;
			for(j=i+1;j<n;j++)
			{
				if(a[i]!='$')
				{
				if(a[i]==a[j])
				{
			a[j]='$';
				b++;
	         }
				}
				}	
				if(a[i]!='$')
				{
				if(b==0)
					printf("%d ",a[i]);
				}
		}
		}
