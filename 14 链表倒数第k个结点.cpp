/*14、输入一个链表，输出该链表中倒数第k个结点。*/
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

		//方法一，线段问题
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
		//方法二：索引问题
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