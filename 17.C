int main()
{
	int a,b,c=0,i,j,d;
	scanf("%d %d",&a,&b);
	if(b>a)
	{
		c=a;
		a=b;
		b=c;
		}
		d=a;

	while(d)
		{
			if((d%a==0)&&(d%b==0))
			break;
			else
			d++;
			}
			printf("%d",d);
			}
