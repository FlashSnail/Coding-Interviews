/*56、在一个排序的链表中，存在重复的结点，请删除该链表中重复的结点，
重复的结点不保留，返回链表头指针。 例如，链表1->2->3->3->4->4->5 处理后为 1->2->5*/
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
	val(x), next(NULL) {
	}
};
class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		if (pHead == NULL)
		{
			return NULL;
		}
		ListNode* currentNode = pHead;
		ListNode* preNode = NULL;
		while (pHead != NULL && pHead->next != NULL && pHead->val == pHead->next->val)//对头结点的特殊处理
		{		
			preNode = pHead;
			pHead = pHead->next->next;
			currentNode = pHead;
		}
		if (pHead == NULL)
		{
			return NULL;
		}
		if (preNode != NULL && currentNode->val == preNode->val)
		{
			return NULL;
		}
		if (currentNode!=NULL)
		{
			preNode = currentNode;
			currentNode = currentNode->next;
			while (currentNode != NULL)
			{
				if (currentNode->next != NULL && currentNode->val == currentNode->next->val)
				{
					preNode->next = currentNode->next->next;
					currentNode = preNode;
				}
				if (currentNode != NULL)
				{
					preNode = currentNode;
					currentNode = currentNode->next;
				}
			}
		}		
		return pHead;
	}
};