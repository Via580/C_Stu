#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//�ַ�������
void reverse(char* left , char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_rotate(char* arr, int k)
{
	size_t len = strlen(arr);
	k %= len;
	reverse(arr, arr + k - 1);         //��߲�����ת
	reverse(arr + k, arr + len - 1);   //�ұ߲�����ת
	reverse(arr, arr + len - 1);         //������ת
}
int main()
{
	char arr[] = "abcdef"; //cdefab
	int k = 0;
	scanf("%d", &k);
	left_rotate(arr, k);
	printf("%s", arr);
	return 0;
}

//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ġ�
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O��N����

//1 2 3
//4 5 6
//7 8 9
typedef struct point
{
	int x;
	int y;
}point;
struct point find_num(int arr[][3], int r, int c, int k)
{
	int x = 0;
	int y = c - 1;
	point s = { -1 , - 1 };
	while (x <= r - 1 && y >= 0)
	{
		if (k < arr[x][y])
			y--;
		else if (k > arr[x][y])
			x++;
		else
		{
			s.x = x;
			s.y = y;
			return s;
		}
	}
	return s;
}
int main()
{
	int arr[3][3] = { 1 , 2 ,3, 4 ,5, 6 ,7 ,8 , 9 };
	int k = 0;
	scanf("%d", &k);
	struct point ret = find_num(arr, 3, 3, k);
	if (ret.x == -1)
		printf("�Ҳ���\n");
	else
		printf("%d %d\n", ret.x, ret.y);
	return 0;
}