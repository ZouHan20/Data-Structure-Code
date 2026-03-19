#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
typedef int type_of_SLinkedlist;
typedef struct SLinkedlist
{
	type_of_SLinkedlist code;
	struct SLinkedlist* next;
}SL;
//打印
void print_SLinkedList(SL* con);

//头插
void push_code_in_the_front(SL** con, type_of_SLinkedlist x);

//尾插
void push_code_in_the_end(SL** pphead, type_of_SLinkedlist x);

//头删
void Delete_code_in_front(SL** pphead);

//尾删
void Delete_code_in_the_end(SL** pphead);

//查找
void Find_code(SL* phead);

//在指定位置之前插入数据（稍难）


//在指定位置之后插入数据（稍难）


//删除pos结点（稍难）


//删除pos之后的一个结点（稍难）


//销毁链表