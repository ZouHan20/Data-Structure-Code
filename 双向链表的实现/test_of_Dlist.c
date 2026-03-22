#include "DList.h"
void test01()
{
	SLnode* slnode=InitListnode(-1);//ÉÚ±øÒÑ´æÔÚ
	pushback(slnode,1);
	print_SLnode(slnode);
	pushback(slnode, 2);
	print_SLnode(slnode);
	pushback(slnode, 3);
	print_SLnode(slnode);
	pushback(slnode, 4);
	print_SLnode(slnode);

    pushfront(slnode, 5);
	print_SLnode(slnode);
	//Deleteback(slnode);
	//print_SLnode(slnode);
	//Deleteback(slnode);
	//print_SLnode(slnode);
	//Deleteback(slnode);
	//print_SLnode(slnode);
	//Deletefront(slnode);
	//print_SLnode(slnode);
	//Deletefront(slnode);
	//print_SLnode(slnode);
	//Deletefront(slnode);
	//print_SLnode(slnode);
	SLnode* find = Findnode(slnode,3);
	push_in_pos(find, 66);
	print_SLnode(slnode);



	pushback(slnode, 6);
	print_SLnode(slnode);
	find = Findnode(slnode, 6);
	Delete_in_pos(find);
	print_SLnode(slnode);
	Destory_Dlist(slnode);
	//print_SLnode(slnode);
	find = NULL;
	slnode = NULL;

}
int main()
{
	test01();
	return 0;
}