/*55��һ�������а����������ҳ�������Ļ�����ڽ�㡣*/
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