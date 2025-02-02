#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#define DEFOULT_SZ 3
#define INC_SZ 2

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];

}PeoInfo;

typedef struct Contect
{
	int sz;
	PeoInfo* data;
	int capacity;
}Contect;


void Initcontect(Contect* pc);

void Addcontect(Contect* pc);

void Delcontect(Contect* pc);

void Showcontect(const Contect* pc);

void Searchcontect(const Contect* pc);

void Modifycontect(Contect* pc);

void Sortcontect(Contect* pc);

void Destroycontect(Contect* pc);

void Savecontect(Contect* pc);