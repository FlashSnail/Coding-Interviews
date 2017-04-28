/*58、请实现一个函数，用来判断一颗二叉树是不是对称的。
注意，如果一个二叉树同此二叉树的镜像是同样的，定义其为对称的。*/
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
	val(x), left(NULL), right(NULL) {
	}
};
class Solution {
public:
	bool sameTree(TreeNode* tree1, TreeNode* tree2)
	{
		if (tree1 == NULL && tree2 == NULL)
		{
			return true;
		}
		if (tree1 != NULL && tree2 == NULL)
		{
			return false;
		}
		if (tree1 == NULL && tree2 != NULL)
		{
			return false;
		}
		if (tree1->val != tree2->val)
		{
			return false;
		}
		return sameTree(tree1->left, tree2->right);
	}
	bool isSymmetrical(TreeNode* pRoot)
	{
		if (pRoot == NULL)
		{
			return true;
		}
		else
		{
			return sameTree(pRoot->left, pRoot->right);
		}		
	}
};