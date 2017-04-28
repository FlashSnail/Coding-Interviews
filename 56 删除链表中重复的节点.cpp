/*56����һ������������У������ظ��Ľ�㣬��ɾ�����������ظ��Ľ�㣬
�ظ��Ľ�㲻��������������ͷָ�롣 ���磬����1->2->3->3->4->4->5 �����Ϊ 1->2->5*/
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
		while (pHead != NULL && pHead->next != NULL && pHead->val == pHead->next->val)//��ͷ�������⴦��
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