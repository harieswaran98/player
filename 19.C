int main()
{
	int a,b,c=0,i,j;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{c=0;
		for(j=i-1;j>=2;j--)
		{
			if(i%j==0)
			{
			c=1;
				}
			}
			if(c!=1)
			{
				if(a%i==0)
				{
			printf("%d\t+",i);
					}
					}
			}
			}
