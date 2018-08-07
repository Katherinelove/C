#include<stdio.h>
#define N 3

void main()
{
	int a[N];
	int i,average,sum=0;
	for(i=0;i<N;i++)
	{
	scanf("%d",&a[i]);     //scanf中不要有\n否则一直处于输入状态
	sum+=a[i];
	}
	for(i=0;i<N;i++)
	printf("%d\n",a[i]);
	average=sum/N;
	printf("%d/n",average);
}


/*
void main()
{
	int a[N];
	printf("%ld\t%d\n",sizeof(a[N]),sizeof(int[N]));
}
*/