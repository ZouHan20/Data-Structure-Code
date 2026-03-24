#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _a;
	int _size;
	int _capacity;
}Heap;
//堆的初始化
void HeapInit(Heap* php);
// 堆的销毁
void HeapDestory(Heap* php);
// 堆的插入
void HeapPush(Heap* php, HPDataType x);
// 堆的删除
void HeapPop(Heap* php);
// 取堆顶的数据
HPDataType HeapTop(Heap* php);
// 堆的判空
int HeapEmpty(Heap* php);
// 对数组进行堆排序
void HeapSort(int* a, int n);
void shift_up(HPDataType* a, int child);
void swap(HPDataType* num1, HPDataType* num2);
void shift_down(HPDataType* a, int futher, int n);
void PrintTopK(int k);