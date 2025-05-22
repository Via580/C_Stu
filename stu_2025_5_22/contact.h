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

//人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[100];//存放人的信息
	int count;//记录当前实际人数
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//增加联系人到通讯录
void AddContct(Contact* pc);

//打印通讯录中的信息
void ShowContact(const Contact* pc);

//删除
void DelContact(Contact* pc);

//查找
void SearchContact(const Contact* pc);

//修改
void ModiContact(Contact* pc);

//分类
void SortContact(Contact* pc);