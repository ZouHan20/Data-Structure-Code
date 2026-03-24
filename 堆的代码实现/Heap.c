#include"Heap.h"
//堆的初始化
void HeapInit(Heap* php)
{
	assert(php);
	php->_capacity = 0;
	php->_a = NULL;
	php->_size = 0;
}
// 堆的销毁
void HeapDestory(Heap* php)
{
	assert(php);
	free(php->_a);
	php->_a = NULL;
	php->_capacity = 0;
	php->_size = 0;
}
void swap(HPDataType* num1, HPDataType*  num2)
{
	HPDataType num3 = *num1;
	*num1 = *num2;
	*num2 = num3;
}
void shift_up(HPDataType*a,int child)
{
	assert(a);
	int futher = (child - 1) / 2;
	while (child > 0)
	{
		if (a[futher] > a[child])
		{
			swap(&a[futher], &a[child]);
			child = futher;
			futher = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
// 堆的插入
void HeapPush(Heap* php, HPDataType x)
{
	assert(php);
	if (php->_size== php->_capacity)
	{
		int newcapacity = php->_capacity == 0 ? 4 : php->_capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->_a,newcapacity * sizeof(HPDataType));
		if (tmp == NULL)
		{
			perror("realloc::tmp");
			exit(1);
		}
		php->_capacity = newcapacity;
		php->_a = tmp;
	}
	php->_a[php->_size] = x;
	php->_size++;
	be_up(php->_a,php->_size-1);
}
void shift_down(HPDataType* a, int futher,int n)
{
	int child = futher * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n&& a[child + 1] < a[child])
		{
			child++;
		}
		if (a[child] < a[futher])
		{
			swap(&a[futher], &a[child]);
			futher=child;
			child = futher * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
// 堆的删除
void HeapPop(Heap* php)
{
	assert(php);
	assert(php->_size > 0);
	swap(&php->_a[0], &php->_a[php->_size - 1]);
	php->_size--;
	be_down(php->_a, 0,php->_size);
}
// 取堆顶的数据
HPDataType HeapTop(Heap* php)
{
	assert(php);
	assert(php->_size > 0);
	return php->_a[0];
}
// 堆的判空
int HeapEmpty(Heap* php)
{
	assert(php);
	return php->_size == 0;
}
void HeapSort(int* a, int n)
{
	//从下往上建堆法
	for (int i = (n - 1 - 1) / 2; i>=0; i--)
	{
		be_up(a, i);
	}
	int end = n - 1;
	while (end>=0)
	{
		swap(&a[0], &a[end]);
		be_down(a, 0, end);
		end--;
	}
}

