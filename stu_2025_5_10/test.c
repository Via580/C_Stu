//void* 是无具体类型的指针，可以接受任意类型的地址，所以不能解引用操作，也不能+-整数
//解引用时需要强制类型转化为其他类型的指针

//回调函数
//通过指针调用的函数是回调函数

//对于数组名大部分情况都表示首元素地址，有两个例外
//1.sizeof(数组名) 表示的是整个数组的大小
//2.&数组名 表示的是整个数组的地址,也就是首元素地址，只是在数值上相同但实际意义大不相同。&数组名在进行加减操作时跳过一整个数组（容易出错）
#include <stdio.h>
int main()
{
	//在32位环境下测试
	int a[] = { 1 , 2 , 3 , 4 };
	printf("%d\n", sizeof(a));
	//16
	printf("%d\n", sizeof(a + 0));
	//4
	printf("%d\n", sizeof(*a));
	//4
	printf("%d\n", sizeof(a + 1));
	//4
	printf("%d\n", sizeof(a[1]));
	//4
	printf("%d\n", sizeof(&a));
	//4 &a表示整个数组的地址，而地址的大小只能是4或者8
	printf("%d\n", sizeof(*&a));
	//16 *&a表示取出了整个数组
	printf("%d\n", sizeof(&a + 1));
	//4 &a + 1表示跳过了一个数组
	printf("%d\n", sizeof(&a[0]));
	//4
	printf("%d\n", sizeof(&a[0] + 1));
	//4
	return 0;
}