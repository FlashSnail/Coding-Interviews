/*15、输入一个链表，反转链表后，输出链表的所有元素。*/
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