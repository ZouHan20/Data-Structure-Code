#include"Heap.h"
void test01()
{
	Heap heap;
	HeapInit(&heap);
	int arr[10] = { 2,5,6,48,77,95,46,5,2,63 };
	for (int i = 0; i < 10; i++)
	{
		HeapPush(&heap, arr[i]);
	}
	printf("%d ", HeapSize(&heap));
	while (!HeapEmpty(&heap))
	{
		printf("%d ", HeapTop(&heap));
		HeapPop(&heap);
	}
	HeapDestory(&heap);
}
void test02()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	HeapSort(arr, n);
	int i = 0;
	while (i<n)
	{
		printf("%d ", arr[i]);
		i++;
	}
}
int main()
{
	//test01()
	test02();
	return 0;
}