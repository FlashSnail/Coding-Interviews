/*57、给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并且返回。
注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。*/
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