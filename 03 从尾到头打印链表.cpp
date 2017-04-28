//3、输入一个链表，从尾到头打印链表每个节点的值。

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};

class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int> val;
		ListNode* currentNode = head;
		while (currentNode != NULL)
		{
			val.insert(val.begin(), currentNode->val);
			currentNode = currentNode->next;
		}
		return val;
	}
};