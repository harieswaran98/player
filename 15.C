#include<stdio.h>
int main()
{
	int a=0,b=0,i,j,h;
	char c[100];
	scanf("%[^\n]s",c);
	for(i=0;c[i]!='\0';i++)
	{b=0;
//	printf("%d",i);
		for(j=i+1;c[j]!='\0';j++)
		{
			if(c[i]!='$')
			{
			if(c[i]==c[j])
			{
			c[j]='$';
			b++; 
			}
			}//printf("%d",i);
			if(a<b)
			{
				a=b;
				h=i;
				}
			}
			}
			
			printf("%c",c[h]);
			}
