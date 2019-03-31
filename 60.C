int main()
{
	int a=0,b,c=0,d=0,i,j=0,m;
	char e[100],v[100];
	scanf("%s",&e);
	scanf("%s",&v);
	for(i=0;e[i]!='\0';i++)
    {
    	for(b=0;v[b]!='\0';b++)
        {
	if(v[b]==e[i])
	{
		d=1;
		}
		}
		}
		if(d==1)
	     printf("yes");
		else
		printf("no");
	     
}
