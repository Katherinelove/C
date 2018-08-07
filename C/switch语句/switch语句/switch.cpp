#include<stdio.h>

void main()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		printf("1\n");break;//break跳出switch
	case 23:
		printf("23\n");
	case 2>3://表达式值为0，输入a=0时执行
		printf("0\n");
	case 5://case 3+2:可以用表达式表示
		printf("5\n");
	case 'A'://字符也是常量，注意a为整型，输入时65=A
		printf("A\n");
	default:
		printf("不满足以上条件输出:\n");

	}
    printf("switch语句外:\n");
}