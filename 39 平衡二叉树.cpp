/*39、输入一棵二叉树，判断该二叉树是否是平衡二叉树。*/
class Solution {
public:
	bool ans;
	int treeDeep(TreeNode* pRoot)
	{
		if (pRoot == NULL)
		{
			return 0;
		}
		int left = treeDeep(pRoot->left);
		int right = treeDeep(pRoot->right);
		int difference = treeDeep(pRoot->left) - treeDeep(pRoot->right);
		if (difference >= -1 && difference <= 1)
		{
			ans = true;
		}
		else
		{
			ans = false;
		}
		return left > right ? left + 1 : right + 1;
	}
	bool IsBalanced_Solution(TreeNode* pRoot) {
		if (pRoot == NULL)
		{
			return true;
		}
		int deep = treeDeep(pRoot);
		return ans;
	}
};