/*59、请实现一个函数按照之字形打印二叉树，即第一行按照从左到右的顺序打印，
第二层按照从右至左的顺序打印，第三行按照从左到右的顺序打印，其他行以此类推。*/
//坑爹，第一行是根节点
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
	vector<vector<int>> Print(TreeNode* pRoot) {
		vector<int> row;
		vector<vector<int>> ans;
		if (pRoot == NULL)
		{
			return ans;
		}		
		stack<TreeNode*> ltor;
		stack<TreeNode*> rtol;
	//=========================================
		//对根节点的特殊操作
		row.push_back(pRoot->val);
		ans.push_back(row);
		row.clear();
		if (pRoot->right != NULL)
		{
			row.push_back(pRoot->right->val);
			rtol.push(pRoot->right);
		}
		if (pRoot->left != NULL)
		{
			row.push_back(pRoot->left->val);
			rtol.push(pRoot->left);
		}		
		if (!row.empty())
		{
			ans.push_back(row);
			row.clear();
		}		
	//=========================================
		while (!rtol.empty() || !ltor.empty())
		{
			while (!rtol.empty())
			{
				pRoot = rtol.top();
				if (pRoot->left != NULL)
				{
					row.push_back(pRoot->left->val);
					ltor.push(pRoot->left);
				}
				if (pRoot->right != NULL)
				{
					row.push_back(pRoot->right->val);
					ltor.push(pRoot->right);
				}
				rtol.pop();
			}
			if (!row.empty())
			{
				ans.push_back(row);
				row.clear();
			}
			while (!ltor.empty())
			{
				pRoot = ltor.top();
				if (pRoot->right != NULL)
				{
					row.push_back(pRoot->right->val);
					rtol.push(pRoot->right);
				}
				if (pRoot->left != NULL)
				{
					row.push_back(pRoot->left->val);
					rtol.push(pRoot->left);
				}
				ltor.pop();
			}
			if (!row.empty())
			{
				ans.push_back(row);
				row.clear();
			}
		}
		return ans;
	}

};