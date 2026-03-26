#include"binery.h"
int main()
{
	//准备工作
	int i = 0;
	BTDataType* a = "ABD##E#H##CF##G##";
	i = 0;
	// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
	BTNode* _root=BinaryTreeCreate(a,&i);
	// 二叉树节点个数
	printf("%d", binarytreesize(_root));
	printf("\n");
	// 二叉树叶子节点个数
	printf("%d", BinaryTreeLeafSize(_root));
	printf("\n");
	// 二叉树第k层节点个数
	printf("%d", BinaryTreeLevelKSize(_root, 2));
	printf("\n");
	// 二叉树查找值为x的节点
	BTNode*ret=BinaryTreeFind(_root, 'C');
	printf("%c",ret->_data);
	printf("\n");
	// 二叉树前序遍历 
	 BinaryTreePrevOrder(_root);
	 printf("\n");
	// 二叉树中序遍历
	BinaryTreeInOrder(_root);
	printf("\n");
	// 二叉树后序遍历
	BinaryTreePostOrder(_root);
	printf("\n");
	 //层序遍历
	BinaryTreeLevelOrder(_root);
	printf("\n");
	 //判断二叉树是否是完全二叉树
	if (BinaryTreeComplete(_root))
	{
		printf("该二叉树是完全二叉树");
	}
	else
	{
		printf("该二叉树不是完全二叉树");
	}
	//二叉树销毁
	BinaryTreeDestory(_root);
	return 0;
}