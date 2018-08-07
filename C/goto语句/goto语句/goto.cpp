#include<stdio.h>

/*
// goto在标号之前，跳转
void main()
{
	printf("1\n");
//	goto ABC;//改编程序运行顺序，跳转到标号继续执行
	printf("2\n");
//ABC: //标号
	printf("3\n");
	printf("4\n");
}
*/


//goto在标号之后 语句前跳（可能无现循环）
void main()
{
	printf("1\n");
	ABC: //标号
	printf("2\n");
	printf("3\n");
	printf("4\n");
	goto ABC;//改编程序运行顺序，跳转到标号继续执行
	printf("5\n");