/*61、请实现两个函数，分别用来序列化和反序列化二叉树*/
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
	string ans = "";
	int i = 0;
	void Code(TreeNode* root)
	{
		if (root == NULL)
		{
			ans += '#,';
			return;
		}
		ans += to_string(root->val) + ',';
		Serialize(root->left);
		Serialize(root->right);
	}
	char* Serialize(TreeNode *root) {
		if (root == NULL)
		{
			return NULL;
		}
		Code(root);
		char* res = new char[ans.length() + 1]();
		for (int j = 0; j < ans.length(); j++)
		{
			res[j] = ans[j];
		}
		res[ans.length()] = '\0';
		ans = "";
		return res;
	}
	TreeNode* Decode(char** str)
	{
		if (**str == '#')
		{
			++(*str);
			return NULL;
		}
		int num = 0;
		while (**str != '\0' && **str != ',')
		{
			num = num * 10 + (**str - 48);
			++(*str);
		}
		TreeNode* node = new TreeNode(num);
		if (**str == '\0')
		{
			return node;
		}
		else
		{
			++(*str);
		}		
		node->left = Decode(str);
		node->right = Decode(str);
		return node;
	}
	TreeNode* Deserialize(char *str) {
		if (str == NULL)
		{
			return NULL;
		}
		TreeNode* root = Decode(&str);
		return root;
	}
};