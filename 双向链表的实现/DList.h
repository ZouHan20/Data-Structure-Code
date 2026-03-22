#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define _CRT_SECURE_NO_WARNINGS 1
typedef int SLnodetype;
typedef struct Listnode
{
	int code;
	struct Listnode* next;
	struct Listnode* prev;
}SLnode;
SLnode* InitListnode(int x);
void pushback(SLnode* pslnod, SLnodetype x);
void print_SLnode(SLnode* pslnod);
void pushfront(SLnode* pslnode, SLnodetype x);
void Deleteback(SLnode* pslnode);
void Deletefront(SLnode* pslnode);
SLnode* Findnode(SLnode* pslnode, int x);
void push_in_pos(SLnode* pos, int x);
void Delete_in_pos(SLnode* pos);
void Destory_Dlist(SLnode* pslnode);