/*55、一个链表中包含环，请找出该链表的环的入口结点。*/
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
	val(x), next(NULL) {
	}
};
class Solution {
public:
	map<ListNode*, int> m;
	ListNode* EntryNodeOfLoop(ListNode* pHead)
	{
		if (pHead == NULL)
		{
			return NULL;
		}
		ListNode* currentNode = pHead;
		m[currentNode] = 1;
		currentNode = currentNode->next;
		while (currentNode != NULL)
		{
			m[currentNode]++;
			if (m[currentNode] == 2)
			{
				break;
			}
			currentNode = currentNode->next;
		}
		return currentNode;
	}
};