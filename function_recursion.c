#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����һ�����֣�˳���ӡ���ֵ�ÿһλ
//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10); //�ݹ�
//	}
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);  //print���Դ�ӡ������ÿһλ
//	return 0;
//}


//int strlenth(char* str)
//{
//	if (*str != '\0')
//		return 1 + strlenth(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	printf("�ַ�������Ϊ��%d", strlenth(arr));
//	return 0;
//}


//�ݹ�ʵ�ֽ׳�
//int jiecheng(int n)
//{
//
//	if (n - 1 >= 0)
//			return n*jiecheng(n - 1);
// 	else
//		return 1;
//}
//int main()
//{
//	int i = 5;
//	jiecheng(i);
//	printf("%d", jiecheng(i));
//	return 0;
//}

//쳲���������
//�ݹ������⣬����Ч�ʺܵ�
//int fib(int n)
//{
//	if (n - 2 > 0)
//		return fib(n - 1) + fib(n - 2);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum_1 = 0,sum_2 = 0;
//	int temp = 0;
//	for (i = 0; i <= n; i++)
//	{
//		if (i <= 1)
//		{
//			sum_1 = 1;
//			sum_2 = 1;
//		}
//		else
//		{
//			temp = sum_1;
//			sum_1 += sum_2;
//			sum_2 = temp;
//		}
//	}
//	printf("%d", sum_2);
//	return 0;
//}