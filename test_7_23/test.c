#define _CRT_SECURE_NO_WARNINGS 1

//数组名是首元素的地址
// 1.sizeof(数组名) - 数组名表示整个数组
// 2.&数组名 - 数组名表示整个数组
// 
//16 4/8 4 4/8 4 4/8 16 4/8 4/8 4/8
//6 4/8 1 1 4/8 4/8 4/8
//随机值 随机值 err err 随机值 随机值-6 随机值-1

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bobble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}