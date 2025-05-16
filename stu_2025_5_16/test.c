#include <stdio.h>
#include <string.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", strlen(p));
	//6
	printf("%d\n", strlen(p + 1));
	//5
	printf("%d\n", strlen(*p));
	//×
	printf("%d\n", strlen(p[0]));
	//×
	printf("%d\n", strlen(&p));
	//随机值
	printf("%d\n", strlen(&p + 1));
	//随机值
	printf("%d\n", strlen(&p[0] + 1));
	//5
	return 0;
}


int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	//48
	printf("%d\n", sizeof(a[0][0]));
	//4
	printf("%d\n", sizeof(a[0]));
	//16          注意：是第一行的地址而不是第一个元素 a[0]是第一行数组名，a[0]是单独放在sizeof内部所以a[0]表示整个第一行
	printf("%d\n", sizeof(a[0] + 1));
	//4
	printf("%d\n", sizeof(*(a[0] + 1)));
	//4             //这里的a[0]不是单独放在sizeof内部，a[0]是第一行数组名，所以a[0]表示第一行的首元素
	printf("%d\n", sizeof(a + 1));
	//4
	printf("%d\n", sizeof(*(a + 1)));
	//16
	printf("%d\n", sizeof(&a[0] + 1));
	//4
	printf("%d\n", sizeof(*(&a[0] + 1)));
	//16
	printf("%d\n", sizeof(*a));
	//16
	printf("%d\n", sizeof(a[3]));
	//16
	return 0;
}