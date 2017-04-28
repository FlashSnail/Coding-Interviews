/*15������һ��������ת�����������������Ԫ�ء�*/
struct ListNode {
		int val;
		struct ListNode *next;
		ListNode(int x) :
		val(x), next(NULL) {
		}
};
class Solution {
public:
	ListNode* ReverseList(ListNode* pHead) {
		if (pHead == NULL)
		{
			return NULL;
		}
		ListNode* preNode;
		ListNode* newNode;
		ListNode* currentNode = pHead;
		newNode = new ListNode(currentNode->val);
		newNode->next = NULL;
		while (currentNode->next != NULL)
		{
		//	preNode = new ListNode(currentNode->val);
		//	preNode->next = newNode;
			preNode = newNode;
			currentNode = currentNode->next;
			newNode = new ListNode(currentNode->val);
			newNode->next = preNode;
		}
		return newNode;
	}
};