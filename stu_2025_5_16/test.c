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
	//��
	printf("%d\n", strlen(p[0]));
	//��
	printf("%d\n", strlen(&p));
	//���ֵ
	printf("%d\n", strlen(&p + 1));
	//���ֵ
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
	//16          ע�⣺�ǵ�һ�еĵ�ַ�����ǵ�һ��Ԫ�� a[0]�ǵ�һ����������a[0]�ǵ�������sizeof�ڲ�����a[0]��ʾ������һ��
	printf("%d\n", sizeof(a[0] + 1));
	//4
	printf("%d\n", sizeof(*(a[0] + 1)));
	//4             //�����a[0]���ǵ�������sizeof�ڲ���a[0]�ǵ�һ��������������a[0]��ʾ��һ�е���Ԫ��
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