#include"链表头文件.h"
void print_SLinkedList(SL* con){
	while (con){
		printf("%d->", con->code);
		con = con->next;
	}
	printf("NULL\n");
}
SL* Creat_a_node(type_of_SLinkedlist x){
	SL* newnode =(SL*) malloc(sizeof(SL));
	if (newnode == NULL){
		perror("melloc");
		exit(1);
	}
		newnode->code = x;
		newnode->next = NULL;
	return newnode;
}
void push_code_in_the_front(SL** pphead, type_of_SLinkedlist x){
	assert(pphead && *pphead);
	SL* newnode = Creat_a_node(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
void push_code_in_the_end(SL** pphead, type_of_SLinkedlist x){
	assert(pphead);
	SL* newnode = Creat_a_node(x);
	if (*pphead == NULL){
		*pphead = newnode;
	}
	else {
		SL* Stail = *pphead;
		while (Stail->next) {
			Stail = Stail->next;
		}
		Stail->next = newnode;
	}
}
void Delete_code_in_front(SL** pphead){
	assert(pphead && *pphead);
	SL* pos = *pphead;
	*pphead = (*pphead)->next;
	free(pos);
	pos->next = NULL;
}
void Delete_code_in_the_end(SL** pphead){
	SL* bef = *pphead;
	while (bef->next->next){
		free(bef->next);
		bef->next = NULL;
	}
}
void Find_code(SL* phead) {
	printf("please input what you want to find\n");
	type_of_SLinkedlist x = 0;
	scanf("%d", &x);
	while (phead) {
		if (phead->code == x) {
			printf("find!\n");
			return;
		}
		phead = phead->next;

	}
	printf("fail\n");
}