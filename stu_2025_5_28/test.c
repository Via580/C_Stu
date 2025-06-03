#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
//int main()
//{
//	char str[10] = "holle bit";
//	memset(str + 2, 'x', 3);
//	printf("%s", str);
//	/*int arr[10] = { 0 };*/
//	//把arr全部初始化为1
//	/*memset(arr, 1, 40); //memset在初始化整形的时候是一个字节一个字节的进行，而整形占四个字节，所以一般不用memset初始化整形数组
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);       
//	}*/
//	return 0;
//}

//小乐乐改数字，奇数变成1，偶数变成0
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int j = 0;
//	int i = 0;
//	int ret = 0;
//	while (num)
//	{
//		if (num % 2 == 0)
//			i = 0;
//		else
//			i = 1;
//		ret += i * pow(10, j++);
//		num /= 10;
//	}
//	printf("%d", ret);
//	return 0;
//}

//带空格的直角三角形图案（下三角）
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int row = num ;
//	int col = num ;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		
//		for (j = 0; j < col; j++)
//		{	
//			if ((i + j) >= num - 1)
//			{
//				printf("* ");
//			}
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//网购，双11打七折，双12打八折，日期只有双11或者双12，有优惠卷再减50
//int main()
//{
//	float price = 0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%f %d %d %d", &price, &m, &d, &flag);
//	if (m == 11)
//	{
//		if (1 == flag)
//		{
//			printf("%.2f", price * 0.7 - 50);
//			return 0;
//		}
//		else
//			printf("%.2f", price * 0.7);
//		return 0;
//	}
//	else
//	{
//		if (1 == flag)
//		{
//			printf("%.2f", price * 0.8 - 50);
//			return 0;
//		}
//		else
//			printf("%.2f", price * 0.8);
//		return 0;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) && 
//							((b == 2) + (e == 4) == 1) && 
//							((c == 1) + (d == 2) == 1) && 
//							((c == 5) + (d == 3) == 1) && 
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("%d %d %d %d %d", a, b, c, d, e);
//								return 0;
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("%c", killer);
//	}
//	return 0;
//}

//打印正杨辉三角
//#define row 10
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i == j || 0 == j)
//				arr[i][j] = 1;
//			if(i >= 2 && j >= 1 && i != j)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			
//		}
//	
//	}
//	int m = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < row - i; j++)
//		{
//			printf("  ");               //注意是两个空格
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-4d", arr[i][j]);  //注意是%-4d
//		}
//		printf("\n"); 
//	}
//	return 0;
//}

