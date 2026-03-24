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
void be_up(HPDataType* a, int child);
void swap(HPDataType* num1, HPDataType* num2);
void be_down(HPDataType* a, int futher, int n);
