#include <stdio.h>
//struct test	
//{
//	int name;
//	char* pc;
//	short a;
//	char arr1[4];
//	short arr[2];	
//}* p = (struct test*)0x100000;
//已知结构体test类型的变量大小为20个字节
//x86环境，以下表达式的值为多少
//int main()
//{
//	printf("%p\n", p + 0x1);               //结构体指针类型+1跳过一整个结构体
//	0x100014
//	printf("%p\n", (long)p + 0x1);         //整形+1直接加1
//	1048576 + 1 --> 1048577
//	0x100001
//	printf("%p\n", (int*)p + 0x1);
//	0x100000 + 4 --> 0x100004
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);          //小端存储模式
//	printf("%x , %x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0 , 1) , (2 , 3) , (4 , 5) };         //这样初始化的内容是1 ， 3 ， 5.逗号表达式只会返回最后一个值
//	int* p;                                                //正确的应该是{{0，1}，{2，3}，{4，5}}
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p , %d", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
//p[4][2] -> *(*(p + 4)+2) p + 1直接跳过4个元素 
//画图发现，&p[4][2] - &a[4][2]之间相差4个元素，所以是-4
//-4在内存中存储为
//1000000000000000000000000000100 -原码
//1111111111111111111111111111011 -反码
//1111111111111111111111111111100 -补码
//转为16进制为FF FF FF FC

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));              //*(aa + 1)是对第二行的地址解引用，得到的是第二行数组名，而不是第二行第一个元素
//	printf("%d , %d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work" , "at" , "alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

int main()
{
	char* c[] = { "ENTE" , "NEW" , "POINT" , "FIRST" };
	char** cp[] = { c + 3 , c + 2 , c + 1 , c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	//POINT
	printf("%s\n", *-- * ++cpp + 3);
	//E
	printf("%s\n", *cpp[-2] + 3);
	//ST
	printf("%s\n", cpp[-1][-1] + 1);
	//EW
	return 0;
}
//操作符优先级中自增操作符大于解引用操作符，两者都是从右往左
//此题画图之后便可，不画图的话难度很大

