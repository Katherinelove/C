#include<stdio.h>

void main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("1\n");break;//break����switch
	case 23:
		printf("23\n");
	case 2>3://���ʽֵΪ0������a=0ʱִ��
		printf("0\n");
	case 5://case 3+2:�����ñ��ʽ��ʾ
		printf("5\n");
	case 'A'://�ַ�Ҳ�ǳ�����ע��aΪ���ͣ�����ʱ65=A
		printf("A\n");
	default:
		printf("�����������������:\n");

	}
    printf("switch�����:\n");
}