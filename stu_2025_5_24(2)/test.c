#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

//strlenģ��ʵ��
//1.����������
//2.ָ�� - ָ��
//3.�ݹ�ķ���
//size_t my_strlen(const char* str)
//{
//	size_t cnt = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		str++;
//		cnt++;
//	}
//	return cnt;
//}
//int main()
//{
//	char str[] = "bit";
//	int ret = my_strlen(str);
//	printf("%d", ret);
//	return 0;
//}

//strcpyģ��ʵ��
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//		;
//	return ret;
//}
//int main()
//{
//	//char name[20] = "xxxxxxxxxxxxx";
//	//char arr[] = { 'b' , 'i' , 't' };
//	//strcpy(name, arr);                  //err �� Դ�ַ���������\0�������ὫԴ�ַ�����\0������Ŀ��ռ�
//	//return 0;                                 

//	char name[20] = "xxxxxxxxxxxxx";
//	char arr[] = "bit";
//	my_strcpy(name, arr);
//	printf("%s" , name);
//	return 0;
//}

//strcatģ��ʵ��
//�ַ���׷��
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//		dest++;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//char name[20] = "xxxxxxxxxxxxx";
//	//char arr[] = { 'b' , 'i' , 't' };
//	//strcpy(name, arr);
//	//return 0;                                 
//	char name[20] = "xxx";
//	char arr[] = "bit";
//	my_strcat(name, arr);
//	printf("%s" , name);
//	return 0;
//}

//strcmpģ��ʵ��
//�����ַ����Ƚ���ȣ�Ӧ��ʹ��strcmp
//int main()
//{
//	char arr1[20] = "zhangsanfeng";
//	char arr2[20] = "zhangsan";
//	int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}

//int my_strcmp(const char* e1 , const char* e2)
//{
//	assert(e1 && e2);
//	while (*e1 == *e2)
//	{
//		if (*e1 == '\0')
//			return 0;
//		e1++;
//		e2++;
//	}
//	return (*e1 - *e2)
//}
//int main()
//{
//	char arr1[20] = "zhangsanfeng";
//	char arr2[20] = "zhangsan";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}
//
//strstrģ��ʵ��
//�Ƿ����Ӵ�
//int main()
//{
//	char a1[] = "abcedefrg";
//	char a2[] = "ced";
//	char* ptr = strstr(a1, a2);
//	if (ptr == NULL)
//		printf("�Ӵ�������\n");
//	else
//		printf("����\n");
//	printf("%s", ptr);       //cedefrg
//	return 0;
//}
//char* my_strstr(const char* e1, const char* e2)
//{
//	assert(e1 && e2);
//	while (1)
//	{
//		if (*e1 == *e2)
//			break;
//		e1++;
//	}
//	char* ptr = e1;
//	while (*e2 != '\0')
//	{
//		if (*e1 != *e2)
//			return NULL;
//		e1++;
//		e2++;
//	}
//	return ptr;
//}
//int main()
//{
//	char a1[] = "abcdefg";
//	char a2[] = "cdefg";
//	char* ret = my_strstr(a1, a2);
//	if (ret == NULL)
//		printf("�ִ�������");
//	else
//		printf("%s", ret);
//	return 0;
//}

//strtok
//�ַ����ָ�
//int main()
//{
//	const char* sep = "@.";
//	char email[] = "3393896775@qq.com";
//	char cp[30] = { 0 };
//	strcpy(cp, email);
//	char* ret = NULL;
//	for (ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//}
