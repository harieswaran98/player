int main()
{
	int a,b,c=0,i,j,k,l=0;
	char d[100];
	
		scanf("%s\n",&d);
		for(i=0;d[i]!='\0';i++)
	{
		d[i]=d[i]+3;
		//printf("%d",d[i]);	
	  if((d[i]>122)&&(d[i]<126))
	  {
	 d[i]=d[i]-26;
	  	}
	   if((d[i]>90)&&(d[i]<94))
	   {
	//printf("%d",d[i]);
	   d[i]=d[i]-26;
	   	}	
	   }
	   printf("%s",d);
	   }
