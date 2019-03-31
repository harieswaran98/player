int main()
{
	int a,b,c[100],d,e=0,f,g=0;
	scanf("%d %d\n",&a,&d);
	for(b=0;b<a;b++)
	scanf("%d",&c[b]);
	
	for(e=0;e<a;e++)
	{
		for(f=e+1;f<a;f++)
		{
		if(d==c[e]+c[f])
		g=1;
		}
	}
		if(g==1)
		printf("yes");
		else
		printf("no");
	}
