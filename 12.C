int main()
{
	int i=0,j,a;
	scanf("%d",&a);
	while(a)
	{
		j=a%10;
		i=i+(j*j);
		a=a/10;
		}
		printf("%d",i);
		}
