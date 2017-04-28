/*14������һ����������������е�����k����㡣*/
struct ListNode {
		int val;
		struct ListNode *next;
		ListNode(int x) :
		val(x), next(NULL) {
		}
};
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {

		//����һ���߶�����
		/*ListNode *currentNode = pListHead;
		ListNode *targetNode = pListHead;
		if (pListHead == NULL || k==0)
		{
			return NULL;
		}
		for (int i = 0; i < k-1; i++)
		{
			if (currentNode->next != NULL)
			{
				currentNode = currentNode->next;
			}
			else
			{
				return NULL;
			}
		}
		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
			targetNode = targetNode->next;
		}			
		return targetNode;*/
		//����������������
		ListNode* currentNode = pListHead;
		ListNode* targetNode = pListHead;
		if (pListHead == NULL || k == 0)
		{
			return NULL;
		}
		int num = 1;
		while (currentNode->next != NULL)
		{
			currentNode = currentNode->next;
			num++;
		}
		if (num < k)
		{
			return NULL;
		}
		for (int i = 0; i < num-k; i++)
		{
			targetNode = targetNode->next;
		}
		return targetNode;
	}
};