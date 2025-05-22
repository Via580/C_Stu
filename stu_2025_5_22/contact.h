#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

//�˵���Ϣ
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[100];//����˵���Ϣ
	int count;//��¼��ǰʵ������
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//������ϵ�˵�ͨѶ¼
void AddContct(Contact* pc);

//��ӡͨѶ¼�е���Ϣ
void ShowContact(const Contact* pc);

//ɾ��
void DelContact(Contact* pc);

//����
void SearchContact(const Contact* pc);

//�޸�
void ModiContact(Contact* pc);

//����
void SortContact(Contact* pc);