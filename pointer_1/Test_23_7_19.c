#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����ָ�����鼰�ص�������Ӧ��
//void menu()
//{
//	printf("*************************************\n");
//	printf("******  1��Add      2��Sub    *******\n");
//	printf("******  3��Mul      4��Div    *******\n");
//	printf("******  5��Xor      0��exit   *******\n");
//	printf("*************************************\n");
//}
//int Add(int x, int y)//�ӷ�
//{
//	return x + y;
//}
//int Sub(int x, int y)//����
//{
//	return x - y;
//}
//int Mul(int x, int y)//�˷�
//{
//	return x * y;
//}
//int Div(int x, int y)//����
//{
//	return x / y;
//}
//int Xor(int x, int y)//���
//{
//	return x ^ y;
//}
//void Calc(int(*parr)(int, int))//�ص�������������������
//{
//	int x = 0;
//	int y = 0;
//	printf("������������������>\n");
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
//		printf("��ѡ��\n");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������\n");
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
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������������>\n");
//			scanf("%d%d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	} while (input);
//	return 0;
//}

//ָ������
//int* p[5];

//����ָ��
//int (*p)[5];

//����ָ��
//int(*parr)(int,int);

//����ָ������
//int(*parr[5])(int, int);

//����ָ�������ָ��
//int (*(*parr)[5])(int, int);

