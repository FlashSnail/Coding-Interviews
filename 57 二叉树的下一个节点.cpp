/*57������һ�������������е�һ����㣬���ҳ��������˳�����һ����㲢�ҷ��ء�
ע�⣬���еĽ�㲻�����������ӽ�㣬ͬʱ����ָ�򸸽���ָ�롣*/
struct TreeLinkNode {
	int val;
	struct TreeLinkNode *left;
	struct TreeLinkNode *right;
	struct TreeLinkNode *next;
	TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {

	}
};
class Solution {
public:
	TreeLinkNode* viewTree(TreeLinkNode* pNode, TreeLinkNode* targetNode)
	{
		if (pNode == NULL)
		{
			return NULL;
		}
		if (pNode->next == targetNode)
		{
			return pNode;
		}
		viewTree(pNode->left, targetNode);
		viewTree(pNode,targetNode);
		viewTree(pNode->right,targetNode);
	}
	TreeLinkNode* GetNext(TreeLinkNode* pNode)
	{
		if (pNode == NULL)
		{
			return NULL;
		}
		if (pNode->right != NULL)
		{
			pNode = pNode->right;
			while (pNode->left != NULL)
			{
				pNode = pNode->left;
			}
			return pNode;
		}
		while (pNode->next != NULL)
		{
			TreeLinkNode* root = pNode->next;
			if (root->left == pNode)
			{
				return root;
			}
			pNode = pNode->next;
		}
		return NULL;
	}
};