int main()
{
	int a,b,c[100],d,e=0,f;
	scanf("%d\n",&a);
	for(b=0;b<a;b++)
	{
	scanf("%d",&c[b]);
		}
	d=(a+1)-2;
	while(d)
		{e=0;
			
			for(b=0;b<a;b++)
			{
				if(e<c[b])
				{
				e=c[b];
				f=b;
			}
			}
			c[f]=0;
			d--;	
		}
	printf("%d",e);
		}
