#include"Heap_copy.h"
int main()
{
	//创造10万个随机数据
	int n = 100000;
	FILE* fin = fopen("data.txt", "w");
	if (fin == NULL)
	{
		perror("fileopen::error");
		exit(1);
	}
	while (n)
	{
		int a = rand()%10000+n;
		fprintf(fin, "%d", a);
		fprintf(fin, "\n");
		n--;
	}
	fclose(fin);
	FILE* fin2 = fopen("data.txt", "r");
	//topk最大的10个数据
	int k = 10;
	int arr[10];
	for (int i = 0; i < k; i++)
	{
		fscanf(fin2, "%d", &arr[i]);
	}
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		be_down(arr,i, k);
	}
	n = 100000;
	for (int t = 0; t < n - k; t++)
	{
		int num = 0;
		fscanf(fin2, "%d", &num);
		if (num > arr[0])
		{
			arr[0] = num;
			be_down(arr, 0, k);
		}
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d", arr[i]);
		printf("\n");
	}
	fclose(fin2);
	return 0;
}