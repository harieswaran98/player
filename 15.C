int main()
{
	int a,b=0,i,j;
	char c[100];
	scanf("%s",&c);
	for(i=0;c[i]!='\0';i++)
	{b=0;
		for(j=i+1;c[j]!='\0';j++)
		{
			if(c[i]!='\0')
			{
			if(c[i]==c[j])
			{
			c[j]='\0';
			b++;
			}
			}
			}
			if(b!=0)
			printf("%c",c[i]);
			}
			}
