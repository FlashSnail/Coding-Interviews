/*16、输入两个单调递增的链表，输出两个链表合成后的链表，
当然我们需要合成后的链表满足单调不减规则。*/

struct ListNode {
		int val;
		struct ListNode *next;
		ListNode(int x) :
		val(x), next(NULL) {
		}
};
class Solution {
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == NULL && pHead2 != NULL)
		{
			return pHead2;
		}
		if (pHead1 != NULL && pHead2 == NULL)
		{
			return pHead1;
		}
		if (pHead1 == NULL && pHead2 == NULL)
		{
			return NULL;
		}
		ListNode* mergeNode;
		if (pHead1->val < pHead2->val)
		{
			mergeNode = new ListNode(pHead1->val);
			pHead1 = pHead1->next;
		}
		else
		{
			mergeNode = new ListNode(pHead2->val);
			pHead2 = pHead2->next;
		}
		ListNode* currentNode = mergeNode;
		while (pHead1 != NULL && pHead2 != NULL)
		{
			if (pHead1->val < pHead2->val)
			{
				currentNode->next = new ListNode(pHead1->val);
				pHead1 = pHead1->next;
			}
			else
			{
				currentNode->next = new ListNode(pHead2->val);
				pHead2 = pHead2->next;
			}
			currentNode = currentNode->next;
		}
		if (pHead1 != NULL)
		{
			currentNode = pHead1;
		}
		if (pHead2 != NULL)
		{
			currentNode = pHead2;
		}
		return mergeNode;
	}
};