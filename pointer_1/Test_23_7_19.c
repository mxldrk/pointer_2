#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数指针数组及回调函数的应用
//void menu()
//{
//	printf("*************************************\n");
//	printf("******  1、Add      2、Sub    *******\n");
//	printf("******  3、Mul      4、Div    *******\n");
//	printf("******  5、Xor      0、exit   *******\n");
//	printf("*************************************\n");
//}
//int Add(int x, int y)//加法
//{
//	return x + y;
//}
//int Sub(int x, int y)//减法
//{
//	return x - y;
//}
//int Mul(int x, int y)//乘法
//{
//	return x * y;
//}
//int Div(int x, int y)//除法
//{
//	return x / y;
//}
//int Xor(int x, int y)//异或
//{
//	return x ^ y;
//}
//void Calc(int(*parr)(int, int))//回调函数，解决冗余的问题
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：>\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", parr(x, y));
//}
//int main()
//{
//	int input = 0;
//
//	int (*parr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//		}
//
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*parr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数：>\n");
//			scanf("%d%d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//
//	} while (input);
//	return 0;
//}

//指针数组
//int* p[5];

//数组指针
//int (*p)[5];

//函数指针
//int(*parr)(int,int);

//函数指针数组
//int(*parr[5])(int, int);

//函数指针数组的指针
//int (*(*parr)[5])(int, int);

