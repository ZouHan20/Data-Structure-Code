#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include<stdlib.h>


#include<assert.h>

typedef int Seqlisttype;
//声明一个顺序表。
//实现增加删除//增加分为头插和尾插//删除分为头删和尾删除
//申明》初始化》销毁。
typedef struct Seqlist
{
	Seqlisttype * arr;
	size_t size;
	size_t Capacity;
}Seqlist;
//初始化
void Initseqlist(Seqlist * sl);
//销毁
void Destoryseqlist(Seqlist * sl);

//开辟空间
void open_space(Seqlist* sl);

//尾部插入
void push_at_the_end(Seqlist* sl, int x);

//打印
void print_seqlist(Seqlist sl);

//头部插入
void push_at_the_front(Seqlist * sl, int x);

//尾部删除法
void delete_at_the_end(Seqlist* sl);
//头部删除法
void delete_at_the_front(Seqlist* sl);


