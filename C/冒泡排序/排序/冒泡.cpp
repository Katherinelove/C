#include<stdio.h>
#define N 5
void main()
{
	
	int i,j,trans;
	int A[N];
	for(i=0;i<N;i++)
		scanf("%d",&A[i]);
	for(i=1;i<N;i++)
	{
		for(j=0;j<N-i;j++)   //	for(j=0;j<N-1;j++)   ��ÿ�αȽ�N-1�Σ�	for(j=0;j<N-i;j++)  ÿ�αȽ�N-i��
		{
			if(A[j]<A[j+1])
			{
				trans=A[j];
				A[j]=A[j+1];
				A[j+1]=trans;
			}
		}
	}
	for(i=0;i<N;i++)
	printf("%d\t",A[i]);
   //	printf("\n");

}