/*62、给定一颗二叉搜索树，请找出其中的第k大的结点。
例如， 5
	  / \ 
	  3 7 
	 /\ /\ 
	2 4 6 8 中，按结点数值大小顺序第三个结点的值为4。*/
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
	val(x), left(NULL), right(NULL) {
	}
};
class Solution {;
public:
	vector<TreeNode*> ans;
	void viewTree(TreeNode* root)
	{
		if (root != NULL)
		{
			viewTree(root->left);
			ans.push_back(root);
			viewTree(root->right);
		}		
	}
	TreeNode* KthNode(TreeNode* pRoot, int k)
	{
		if (pRoot == NULL)
		{
			return NULL;
		}
		if (k <= 0)
		{
			return NULL;
		}
		vector<TreeNode*> res;
		viewTree(pRoot);
		if (k > ans.size())
		{
			return NULL;
		}
		res.push_back(ans[k - 1]);
		ans.clear();
		return *res.begin();
	}
};