/*26������һ�ö��������������ö���������ת����һ�������˫������
Ҫ���ܴ����κ��µĽ�㣬ֻ�ܵ������н��ָ���ָ��*/
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
	vector<TreeNode*> node;
	void midOrder(TreeNode * root)
	{
		if (root->left != NULL)
		{
			midOrder(root->left);
		}
		node.push_back(root);
		if (root->right != NULL)
		{
			midOrder(root->right);
		}
	}
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		if (pRootOfTree == NULL|| (pRootOfTree->left == NULL) && (pRootOfTree->right == NULL))
		{
			return pRootOfTree;
		}
		midOrder(pRootOfTree);
		node[0]->left = NULL;
		node[0]->right = node[1];
		for (int i = 1; i < node.size()-1; i++)
		{
			node[i]->left = node[i - 1];
			node[i]->right = node[i + 1];
		}
		node.back()->left = node[node.size() - 1];
		node.back()->right = NULL;
		return node[0];
	}
};