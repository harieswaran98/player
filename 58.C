int main()
{
	int a=0,b,c=0,d=0,i,j=0,m;
	char e[100],v[100];
	scanf("%[^\n]s",&e);
	scanf("\n");
	scanf("%s",&v);
	//printf("%s",v);
   for(b=0;v[b]!='\0';b++);//printf("%d\t",b);
	for(i=0;e[i]!='\0';i++)
    {
	c=0;
    a=0;
    m=b;//printf("%d\t",m);
	if(v[c]==e[i])
	{
		d=i;
		while(m)
		{
			if(v[c]==e[d])
			{
			a++;
			c++;
			d++;
			}
			m--;
		}
		//printf("%d\t",a);
		if(a==b)
		{
			j++;
		}
		}
		}
	     printf("%d",j);
	     
}
