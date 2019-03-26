int main()
{
	int a,b,c=0,i,j,k,l=0;
	char d[100],e[100]={'k','a','b','a','l','i'};
	scanf("%d\n",&a);
	for(i=0;i<a;i++)
	{
		scanf("%s\n",&d);
		c=0;
		for(j=0;d[j]!='\0';j++)
		{
			for(k=0;k<6;k++)
			{
				if(d[j]!='$')
				{
				if(d[j]==e[k])
				{
					c++;
					d[j]='$';
					break;
				}
				}
				}
				}
				//printf("%d",c);
				if(c==6)
				l++;
				}
				printf("%d",l);
				}
