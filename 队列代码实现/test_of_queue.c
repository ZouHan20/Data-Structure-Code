#include"queue.h"
int main()
{
	Queue que;
	QueueInit(&que);
	QueuePush(&que, 1);
	QueuePush(&que, 2);
	QueuePush(&que, 3);
	QueuePush(&que, 4);
	QueuePush(&que, 5);
	QueuePush(&que, 6);
	QueuePush(&que, 7);
	QueuePush(&que, 8);
	QueuePush(&que, 9);
	//QueuePop(&que);
	while (que.front !=NULL)
	{
		printf("%d<->", QueueFront(&que));
		QueuePop(&que);
	}
	return 0;
}