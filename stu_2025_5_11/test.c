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
//	//4 ��ַ�Ĵ�С����4����8���״�
//	printf("%d\n", sizeof(&arr + 1));
//	//4
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//4
//	return 0;
//}


//int main()
//{
//	//strlen�����Ĳ�����һ����ַ������һ��ֵ �� strlen����Ҫһֱ�ҵ�'\0'�Ż�ͣ�����������ֳ�ʼ������������'\0'������
//	//strlen�ǿ⺯�� �� ֻ����ַ���
//  //sizeofֻ��עռ���ڴ�Ĵ�С�����ں��ڴ��зŵ���ʲô
//  //sizeof�ǲ�����
//  char arr[] = { 'a' , 'b' , 'c' , 'd' , 'e' , 'f' };
//	printf("%d\n", strlen(arr));
//	//���ֵ �����в���'\0',����Ҫһֱ����ȥ�����������ֵ
//	printf("%d\n", strlen(arr + 0));
//	//���ֵ
//	printf("%d\n", strlen(*arr));
//	//strlen(*arr) --> strlen('a') --> strlen(97)Ұָ�루���״� ����ӡʱ�����ӡ��������ȡλ��ʱ�ᷢ�����ʳ�ͻ���ڽ��е���ʱ���Է����������
//	printf("%d\n", strlen(arr[1]));
//	//���ͬ�ϣ����״�
//	printf("%d\n", strlen(&arr));
//	//���ֵ
//	printf("%d\n", strlen(&arr + 1));
//	//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));
//	//���ֵ-1
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
	//��ӡ���ˣ�Ұָ��
	//printf("%d\n", strlen(arr[1]));
	//ͬ��
	printf("%d\n", strlen(&arr));
	//6
	printf("%d\n", strlen(&arr + 1));
	//���ֵ��ע��&arr + 1������һ��������ȥѰ��'\0'������������ڶ���Ԫ�صĵ�ַ������&arr + 1Ҫ����ע�⣨����
	printf("%d\n", strlen(&arr[0] + 1));
	//5
	return 0;
}
