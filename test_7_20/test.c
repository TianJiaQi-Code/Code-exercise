#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void menu()
//{
//	printf("*************************************\n");
//	printf("****   1. add(+)     2. sub(-)   ****\n");
//	printf("****   3. mul(*)     4. div(/)   ****\n");
//	printf("****   0. exit                   ****\n");
//	printf("*************************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		//switch (input)
//		//{
//		//case 1:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Add(x, y));
//		//	break;
//		//case 2:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Sub(x, y));
//		//	break;
//		//case 3:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Mul(x, y));
//		//	break;
//		//case 4:
//		//	printf("请输入两个操作数:>");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", Div(x, y));
//		//	break;
//		//case 0:
//		//	printf("退出\n");
//		//	break;
//		//default:
//		//	printf("选择错误\n");
//		//	break;
//		//}
//	} while (input);
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针 pf, 能够指向my_strcpy
//char* (*pf)(char*,const char*);
////2.写一个函数指针数组 pfArr, 能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);