//3������һ��������β��ͷ��ӡ����ÿ���ڵ��ֵ��

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