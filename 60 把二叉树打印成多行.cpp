/*60、从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行。*/
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
		queue<TreeNode*> currentRow;
		queue<TreeNode*> nextRow;
		vector<int> row;
		vector<vector<int>> ans;
		if (pRoot == NULL)
		{
			return ans;
		}
		row.push_back(pRoot->val);
		if (!row.empty())
		{
			ans.push_back(row);
			row.clear();
		}		
		if (pRoot->left!=NULL)
		{
			row.push_back(pRoot->left->val);
			nextRow.push(pRoot->left);
		}
		if (pRoot->right != NULL)
		{
			row.push_back(pRoot->right->val);
			nextRow.push(pRoot->right);
		}
		if (!row.empty())
		{
			ans.push_back(row);
			row.clear();
		}
		while (!nextRow.empty())
		{
			currentRow = nextRow;
			while (!currentRow.empty())
			{
				pRoot = currentRow.front();
				if (pRoot->left != NULL)
				{
					row.push_back(pRoot->left->val);
					nextRow.push(pRoot->left);
				}
				if (pRoot->right != NULL)
				{
					row.push_back(pRoot->right->val);
					nextRow.push(pRoot->right);
				}
				currentRow.pop();
				nextRow.pop();
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