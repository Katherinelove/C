#include<stdio.h>
#include<math.h>

int main(void)
{

	int m,n,j,k;

	printf("Enter tow integer:\n");
	scanf("%d%d",&m,&n);
do
	{
	k=sqrt(m);
	for(j=2;j<=k;j++)
		if(m%j==0) break;
		if(j>=k+1)
			printf("%d是一个素数\n",m);
	//	else
   //   	printf("%d不是一个素数\n",m);


    m++;
	}while(m<=n);
return(0);
}