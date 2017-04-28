/*59����ʵ��һ����������֮���δ�ӡ������������һ�а��մ����ҵ�˳���ӡ��
�ڶ��㰴�մ��������˳���ӡ�������а��մ����ҵ�˳���ӡ���������Դ����ơ�*/
//�ӵ�����һ���Ǹ��ڵ�
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
		//�Ը��ڵ���������
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