#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,n;
	char a[100],b[100];
	scanf("%d\n",&n);
	scanf("%s",&a);
		for(i=0;i<n;i++)
		{
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
		{
          a[i]='$';
         
			}
			}
			for(i=n-1;i>=0;i--)
			{
				if(a[i]!='$')
				{
				b[j]=a[i];
					j++;
					}
					}
					b[j]='\0';
		
		printf("%s",b);
		
		}
