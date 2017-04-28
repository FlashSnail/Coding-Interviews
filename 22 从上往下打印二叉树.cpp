/*22、从上往下打印出二叉树的每个节点，同层节点从左至右打印。*/
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
	vector<int> PrintFromTopToBottom(TreeNode* root) {
		vector<int> node;
		queue<TreeNode*> q;
		if (root == NULL)
		{
			return node;
		}
		while (root != NULL)
		{
			node.push_back(root->val);
			if (root->left != NULL)
			{
				q.push(root->left);
			}
			if (root->right != NULL)
			{
				q.push(root->right);
			}
			if (q.empty())
			{
				break;
			}
			if (!q.empty())
			{
				root = q.front;
				q.pop();
			}
		}
		return node;
	}
};