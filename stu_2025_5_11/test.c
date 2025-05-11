#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr[] = { 'a' , 'b' , 'c' , 'd' , 'e' , 'f' };
//	printf("%d\n", sizeof(arr));
//	//6
//	printf("%d\n", sizeof(arr + 0));
//	//4
//	printf("%d\n", sizeof(*arr));
//	//1
//	printf("%d\n", sizeof(arr[1]));
//	//1
//	printf("%d\n", sizeof(&arr));
//	//4 地址的大小就是4或者8（易错）
//	printf("%d\n", sizeof(&arr + 1));
//	//4
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//4
//	return 0;
//}


//int main()
//{
//	//strlen函数的参数是一个地址而不是一个值 ， strlen函数要一直找到'\0'才会停下来，而这种初始化方法不含有'\0'！！！
//	//strlen是库函数 ， 只针对字符串
//  //sizeof只关注占用内存的大小，不在乎内存中放的是什么
//  //sizeof是操作符
//  char arr[] = { 'a' , 'b' , 'c' , 'd' , 'e' , 'f' };
//	printf("%d\n", strlen(arr));
//	//随机值 数组中不含'\0',所以要一直找下去，长度是随机值
//	printf("%d\n", strlen(arr + 0));
//	//随机值
//	printf("%d\n", strlen(*arr));
//	//strlen(*arr) --> strlen('a') --> strlen(97)野指针（容易错） ，打印时不会打印出来，读取位置时会发生访问冲突（在进行调试时可以发现这个错误）
//	printf("%d\n", strlen(arr[1]));
//	//情况同上（容易错）
//	printf("%d\n", strlen(&arr));
//	//随机值
//	printf("%d\n", strlen(&arr + 1));
//	//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));
//	//随机值-1
//	return 0;
//}


int main()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));
	//6
	printf("%d\n", strlen(arr + 0));
	//6
	//printf("%d\n", strlen(*arr));
	//打印不了，野指针
	//printf("%d\n", strlen(arr[1]));
	//同上
	printf("%d\n", strlen(&arr));
	//6
	printf("%d\n", strlen(&arr + 1));
	//随机值，注意&arr + 1是跳过一整个数组去寻找'\0'，而不是数组第二个元素的地址。看到&arr + 1要格外注意（做错）
	printf("%d\n", strlen(&arr[0] + 1));
	//5
	return 0;
}
