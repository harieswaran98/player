int main()
{
	int a,b,c=0,d=0,i;
	char e[100],v[100];
	scanf("%s %s",&e,&v);
	for(i=0;v[i]!='\0';i++);
	a=i;
	for(i=0;e[i]!='\0';i++)
	{
		if(e[i]!=v[i])
		d=1;
	     }
	 if(a==i)
	     {
	    if(d==1)
printf("no");
	     else
	     printf("yes");
	     	}
	     else
	     printf("yes");
	     }
