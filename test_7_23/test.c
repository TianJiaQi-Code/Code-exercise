#define _CRT_SECURE_NO_WARNINGS 1

//����������Ԫ�صĵ�ַ
// 1.sizeof(������) - ��������ʾ��������
// 2.&������ - ��������ʾ��������
// 
//16 4/8 4 4/8 4 4/8 16 4/8 4/8 4/8
//6 4/8 1 1 4/8 4/8 4/8
//���ֵ ���ֵ err err ���ֵ ���ֵ-6 ���ֵ-1

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
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}