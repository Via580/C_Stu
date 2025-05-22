#include "contact.h"

//��ʼ��ͨѶ¼
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
		printf("%ͨѶ¼�������޷����\n");
		return;
	}

	printf("����������:>");
	scanf("%s", pc->data[pc->count].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("��������ϵ��ʽ:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("���ӳɹ�!\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-15s\t %-5s\t %-5s\t %-12s\t %-30s\n" , "����" , "����" , "�Ա�" , "�绰" , "סַ");
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
		printf("ͨѶ¼û����ϵ�ˣ�\n");
		return;
	}
	printf("������Ҫɾ���˵�����:>");
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
		printf("ɾ���ɹ�!\n");
	}
	else
		printf("û�д��ˣ�\n");
}

void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	int i = FindByName(pc, name);

	if (i == -1)
	{
		printf("Ҫ���ҵ��˲����ڣ�\n");
		return;
	}
	printf("%-15s\t %-5s\t %-5s\t %-12s\t %-30s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("���޴���!\n");
		return;
	}

	printf("����������:>");
	scanf("%s", pc->data[pos].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pos].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pos].sex);
	printf("��������ϵ��ʽ:>");
	scanf("%s", pc->data[pos].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pos].addr);
	printf("�޸ĳɹ���\n");
}

int com_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}
//��������������
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(PeoInfo), com_peo_by_name);
	printf("����ɹ���\n");
}