#include"链表头文件.h"
test_of_Linkedlist()
{
	SL* con;
	//push_code_in_the_end(&con, 1);
	push_code_in_the_front(&con, 1);
	print_SLinkedList(con);
//	push_code_in_the_end(&con, 2);
    push_code_in_the_front(&con, 2);
	print_SLinkedList(con);
//	push_code_in_the_end(&con, 3);
    push_code_in_the_front(&con, 3);
	print_SLinkedList(con);
//	push_code_in_the_end(&con, 4);
    push_code_in_the_front(&con, 4);
	print_SLinkedList(con);
//	push_code_in_the_end(&con, 5);
    push_code_in_the_front(&con, 5);
	print_SLinkedList(con);
}
int main()
{
	test_of_Linkedlist();
	return 0;
}
