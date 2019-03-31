int main()
{
	int a,b,c=0,d=0,i;
	char e[100],v;
	scanf("%s %c",&e,&v);
	for(i=0;e[i]!='\0';i++)
{
	if(v==e[i])
	{
		printf("%d",i+1);
		break;
		}
	     }
}
