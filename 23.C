int main()
{
	int a,b,c[100],d[100],i,j,k;
	scanf("%d %d\n",&a,&b);
	for(i=0;i<a;i++)
	{
		scanf("%d",&c[i]);
	}
	scanf("\n");
	for(i=0;i<b;i++)
	{
		scanf("%d",&d[i]);
	}
	j=0;
	for(i=0;i<a;i++)
	{

		if(j<c[i])
		j=c[i];
	}
	k=0;
	for(i=a;i<a+b;i++)
	{
		c[i]=d[k]; //printf("\t%d",d[k]);
		if(j<d[k])
		{
			j=d[k];
		}
			printf("%d ",j);
			k++;
			}
			}
