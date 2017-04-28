/*24、输入一颗二叉树和一个整数，打印出二叉树中结点值的和为输入整数的所有路径。
路径定义为从树的根结点开始往下一直到叶结点所经过的结点形成一条路径。*/
struct TreeNode {
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
		}
};
int num = 0;
class Solution {
public:
	vector<vector<int>> array;
	vector<int> path;
	vector<vector<int>> FindPath(TreeNode* root, int expectNumber) {
		if (root == NULL)
		{
			return array;
		}
		int ans = 0;
		ans = root->val;
		path.push_back(root->val);
		if (expectNumber == 0 && root->left == NULL && root->right == NULL)
		{
			array.push_back(path);
		}
		FindPath(root->left, expectNumber - ans);
		FindPath(root->right, expectNumber - ans);
		path.pop_back();
		return array;
	}
};