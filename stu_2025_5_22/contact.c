#include "contact.h"

//初始化通讯录
void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContct(Contact* pc)
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("%通讯录已满，无法添加\n");
		return;
	}

	printf("请输入名字:>");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入联系方式:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("增加成功!\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-15s\t %-5s\t %-5s\t %-12s\t %-30s\n" , "名字" , "年龄" , "性别" , "电话" , "住址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-15s\t %-5d\t %-5s\t %-12s\t %-30s\n", pc->data[i].name,
														pc->data[i].age,
														pc->data[i].sex,
														pc->data[i].tele,
														pc->data[i].addr);
	}
}

int FindByName(Contact* pc , char* name1)
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		int ret = strcmp(pc->data[i].name, name1);
		if (ret == 0)
			return i;
	}
	return -1;
}

void DelContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录没有联系人！\n");
		return;
	}
	printf("请输入要删除人的名字:>");
	scanf("%s", name);

	int ret = FindByName(pc , name);
	if (ret != -1)
	{
		int i = 0;
		for (i = ret; i < pc->count - 1; i++)
		{
			pc->data[i] = pc->data[i + 1];
		}
		pc->count--;
		printf("删除成功!\n");
	}
	else
		printf("没有此人！\n");
}

void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int i = FindByName(pc, name);

	if (i == -1)
	{
		printf("要查找的人不存在！\n");
		return;
	}
	printf("%-15s\t %-5s\t %-5s\t %-12s\t %-30s\n", "名字", "年龄", "性别", "电话", "住址");
	printf("%-15s\t %-5d\t %-5s\t %-12s\t %-30s\n", pc->data[i].name,
		pc->data[i].age,
		pc->data[i].sex,
		pc->data[i].tele,
		pc->data[i].addr);
}

void ModiContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	assert(pc);
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("查无此人!\n");
		return;
	}

	printf("请输入名字:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入联系方式:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功！\n");
}

int com_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
//按照名字来排序
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), com_peo_by_name);
	printf("排序成功！\n");
}