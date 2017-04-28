/*18�����������Ķ�����������任ΪԴ�������ľ��� 
��������:
�������ľ����壺Դ������ 
    	    8
    	   /  \
    	  6   10
    	 / \  / \
    	5  7 9 11
    	���������
    	    8
    	   /  \
    	  10   6
    	 / \  / \
    	11 9 7  5*/

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
	void Mirror(TreeNode *pRoot) {
		if (pRoot == NULL)
		{
			return;
		}
		TreeNode *temp = pRoot;
		temp = temp->right;
		pRoot->right = pRoot->left;
		pRoot->left = temp;
		Mirror(pRoot->left);
		Mirror(pRoot->right);
	}
};