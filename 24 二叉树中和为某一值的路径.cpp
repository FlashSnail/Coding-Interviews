/*24������һ�Ŷ�������һ����������ӡ���������н��ֵ�ĺ�Ϊ��������������·����
·������Ϊ�����ĸ���㿪ʼ����һֱ��Ҷ����������Ľ���γ�һ��·����*/
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