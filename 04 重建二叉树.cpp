/*4������ĳ��������ǰ���������������Ľ�������ؽ����ö�������
���������ǰ���������������Ľ���ж������ظ������֡�
��������ǰ���������{1,2,4,7,3,5,6,8}�������������{4,7,2,1,5,3,8,6}�����ؽ������������ء�*/
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		int indexOfRoot;
		vector<int>	left_pre;
		vector<int>	left_vin;
		vector<int>	right_pre;
		vector<int>	right_vin;
		TreeNode* Root = new TreeNode(pre[0]);
		if (pre.size() == 0 || vin.size() == 0)
		{
			return NULL;
		}
		for (int i = 0; i < vin.size(); i++)
		{
			if (vin[i] == pre[0])
			{
				indexOfRoot = i;
				break;
			}
		}
		for (int i = 0; i < indexOfRoot; i++)
		{
			left_pre.push_back(pre[i + 1]);
			left_vin.push_back(vin[i]);
		}
		for (int i = indexOfRoot + 1; i < vin.size(); i++)
		{
			right_pre.push_back(pre[i]);
			right_vin.push_back(vin[i]);
		}
		Root->left = reConstructBinaryTree(left_pre, left_vin);
		Root->right = reConstructBinaryTree(right_pre, right_vin);
		return Root;

	}
};