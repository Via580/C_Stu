#include <stdio.h>
int main()
{
	char* p = "abcdef";
	printf("%d\n", sizeof(p));
	//4
	printf("%d\n", sizeof(p + 1));
	//4
	printf("%d\n", sizeof(*p));
	//1
	printf("%d\n", sizeof(p[0]));
	//1
	printf("%d\n", sizeof(&p));
	//4
	printf("%d\n", sizeof(&p + 1));
	//4
	printf("%d\n", sizeof(&p[0] + 1));
	//4
	return 0;
}