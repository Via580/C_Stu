#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>   //C语言设置的一个全局的错误码存放的变量
#include <string.h>
#include <assert.h>
//C语言的库函数，在执行失败的时候，都会设置错误码
//0 1 2 3 4 5 6 7
int main()
{
	printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));
	printf("%s\n", strerror(5));


	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	return 0;                             //一般用return 0 表示正常的返回 ，可以用return 1 表示错误的返回
}

//memcpy模拟实现
//对于字符拷贝可以用strcpy，而其它类型的拷贝则用memcpy
int main()
{

	int arr1[] = { 1 , 2, 3 ,4 ,5 };
	int arr2[10] = { 0 };
	memcpy(arr2, arr1, 20);
	return 0;
}

void* my_memcpy(void* e1, const void* e2, size_t num)        //size_t为字节数
{
	assert(e1 && e2);
	char ret = e1;
	while (num--)
	{
		/**e1 = *e2; */                                        //err ,注意，void*类型不能解引用操作
		*(char*)e1 = *(char*)e2;   //这里不能直接在e1和e2后面用后置++，会出现语法错误，
		e1 = (char*)e1+1;          //e1强制类型转化之后再被赋值之后变成原来的泛型指针，不能加减整数操作
		e2 = (char*)e2+1;
	}
	return ret;
}
int main()
{

	int arr1[] = { 1 , 2, 3 ,4 ,5 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 20);

	return 0;
}
//注意。memcpy是用来处理两空独立空间的数据的，如果空间有重叠，则用memmove
//但是memcpy是可以处理重叠空间的拷贝的但是一般不用，使用memmove函数来实现重叠内存之间的拷贝

//memmove模拟实现
void* my_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)            
	{
		//从前->后拷贝
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//从后->前拷贝
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	char a1[20] = "12345678";
	my_memmove(a1 + 2, a1, 5);
	printf("%s", a1);
	return 0;
}