#include "DList.h"
SLnode* InitListnode(int x)
{
	SLnode* node = (SLnode*)malloc(sizeof(SLnode));
	if (node == NULL)
	{
		perror("malloc::node");
		exit(1);
	}
	else {
		node->code = x;
		node->next = node;
		node->prev = node;
	}
	return node;
}
void pushback(SLnode* pslnode, SLnodetype x)
{
	assert(pslnode);
	SLnode* newnode = (SLnode*)malloc(sizeof(SLnode));
	if (newnode == NULL)
	{
		perror("malloc::newnode");
		exit(1);
	}
	else
	{
		//第一步：无害接入
		newnode->code = x;
		newnode->prev = pslnode->prev;
		newnode->next = pslnode;
		//第二步：有害接入；不要弄反顺序
		pslnode->prev->next = newnode;
		pslnode->prev = newnode;
	}
}
void pushfront(SLnode* pslnode, SLnodetype x)
{
	assert(pslnode);
	SLnode* newnode = (SLnode*)malloc(sizeof(SLnode));
	if (newnode == NULL)
	{
		perror("malloc::newnode");
		exit(1);
	}
	//头插
	//无害化接入：
	newnode->code = x;
	newnode->next = pslnode->next;
	newnode->prev = pslnode;
	//有害接入
	pslnode->next->prev = newnode;
	pslnode->next = newnode;
}
void print_SLnode(SLnode* pslnode)
{
	SLnode* pcur = pslnode->next;
	while (pcur != pslnode)
	{
		printf("%d->", pcur->code);
		pcur = pcur->next;
	}
	printf("\n");
}
void Deleteback(SLnode* pslnode)
{
	SLnode* ret = pslnode->prev;
	pslnode->prev = ret->prev;
	ret->prev->next = pslnode;
	free(ret);
	ret = NULL;
}
void Deletefront(SLnode* pslnode)
{
	SLnode* ret = pslnode->next;
	pslnode->next = ret->next;
	ret->next->prev = pslnode;
	free(ret);
	ret = NULL;
}
SLnode* Findnode(SLnode* pslnode, int x)
{
	SLnode* cur = pslnode->next;
	while (pslnode!=cur)
	{
		if (cur->code == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void push_in_pos(SLnode* pos, int x)
{
	assert(pos);
	SLnode* newnode = (SLnode*)malloc(sizeof(SLnode));
	if (newnode == NULL)
	{
		perror("malloc::newnode");
		exit(1);
	}
	newnode->code = x;
	newnode->next = pos->next;
	newnode->prev = pos;
	pos->next->prev = newnode;
	pos->next = newnode;
}
void Delete_in_pos(SLnode* pos)
{
	assert(pos); 
	pos->prev->next = pos->next;
	pos->next->prev = pos->prev;
	free(pos);
	pos = NULL;
}
void Destory_Dlist(SLnode* pslnode)
{
	SLnode* cur = pslnode->next;
	while (cur!=pslnode)
	{
		SLnode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(cur);
	cur = pslnode = NULL;
}