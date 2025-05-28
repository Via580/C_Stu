#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>   //C�������õ�һ��ȫ�ֵĴ������ŵı���
#include <string.h>
#include <assert.h>
//C���ԵĿ⺯������ִ��ʧ�ܵ�ʱ�򣬶������ô�����
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
	return 0;                             //һ����return 0 ��ʾ�����ķ��� ��������return 1 ��ʾ����ķ���
}

//memcpyģ��ʵ��
//�����ַ�����������strcpy�����������͵Ŀ�������memcpy
int main()
{

	int arr1[] = { 1 , 2, 3 ,4 ,5 };
	int arr2[10] = { 0 };
	memcpy(arr2, arr1, 20);
	return 0;
}

void* my_memcpy(void* e1, const void* e2, size_t num)        //size_tΪ�ֽ���
{
	assert(e1 && e2);
	char ret = e1;
	while (num--)
	{
		/**e1 = *e2; */                                        //err ,ע�⣬void*���Ͳ��ܽ����ò���
		*(char*)e1 = *(char*)e2;   //���ﲻ��ֱ����e1��e2�����ú���++��������﷨����
		e1 = (char*)e1+1;          //e1ǿ������ת��֮���ٱ���ֵ֮����ԭ���ķ���ָ�룬���ܼӼ���������
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
//ע�⡣memcpy�������������ն����ռ�����ݵģ�����ռ����ص�������memmove
//����memcpy�ǿ��Դ����ص��ռ�Ŀ����ĵ���һ�㲻�ã�ʹ��memmove������ʵ���ص��ڴ�֮��Ŀ���

//memmoveģ��ʵ��
void* my_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)            
	{
		//��ǰ->�󿽱�
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//�Ӻ�->ǰ����
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