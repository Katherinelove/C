#include<stdio.h>

/*
// goto�ڱ��֮ǰ����ת
void main()
{
	printf("1\n");
//	goto ABC;//�ı��������˳����ת����ż���ִ��
	printf("2\n");
//ABC: //���
	printf("3\n");
	printf("4\n");
}
*/


//goto�ڱ��֮�� ���ǰ������������ѭ����
void main()
{
	printf("1\n");
	ABC: //���
	printf("2\n");
	printf("3\n");
	printf("4\n");
	goto ABC;//�ı��������˳����ת����ż���ִ��
	printf("5\n");