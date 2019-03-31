int main()
{
	int a,b,c[100],d,e=0,f,g;
	scanf("%d\n",&a);
	for(b=0;b<a;b++)
	scanf("%d",&c[b]);
	
	for(e=0;e<a;e++)
	{
		//printf("%d",c[e]);
		if(c[e]==0)
		{
			for(f=e-1;c[f]!=0;f--)
			{
			 if(f==-1)
			 {
			 break;
	        	}
			
	       	
			 printf("%d",c[f]);
	       		
			 }
			}
		}}
