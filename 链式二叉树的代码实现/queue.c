#include"queue.h"
void QueueInit(Queue* q)
{
	assert(q);
	q->front = NULL;
	q->tail = NULL;
	q->size = 0;
}
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	QNode* cur = (QNode*)malloc(sizeof(QNode));
	if (cur == NULL)
	{
		perror("QNode::fail");
		exit(1);
	}
	cur->data = data;
	cur->next = NULL;
	if (q->front == NULL)
	{
		q->front = q->tail = cur;
	}
	else
	{
		q->tail->next  = cur;
		q->tail = cur;
	}
	(q->size)++;
}
void QueuePop(Queue* q)
{
	assert(q);
	if (q->front == q->tail)
	{
		q->front = q->front->next;
		free(q->tail);
		q->tail = q->front;
	}
	else
	{
		QNode* cur = q->front;
		q->front = q->front->next;
		free(cur);
	}
	(q->size)--;
}
QDataType QueueFront(Queue* q)
{
	assert(q);
	return q->front->data;
}
QDataType QueueBack(Queue* q)
{
	assert(q);
	return q->tail->data;
}
int QueueSize(Queue* q)
{
	assert(q);
	return q->size;
}
int QueueEmpty(Queue* q)
{
	assert(q);
	return q->size == 0;
}
void QueueDestroy(Queue* q)
{
	assert(q);
	//assert(q->front && q->tail);
	while (q->front)
	{
		QNode* cur = q->front;
		q->front = q->front->next;
		free(cur);
	}
}