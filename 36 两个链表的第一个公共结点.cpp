/*36、输入两个链表，找出它们的第一个公共结点。*/
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
		ListNode* temp1 = pHead1;
		ListNode* temp2 = pHead2;
		if (pHead1 == pHead2)
		{
			return pHead1;
		}
		else
		{
			while (temp1 != temp2)
			{
				if (temp1 != NULL)
				{
					temp1 = temp1->next;
				}
				if (temp2 != NULL)
				{
					temp2 = temp2->next;
				}
				if (temp1 != temp2)
				{
					if (temp1 == NULL)
					{
						temp1 = pHead2;
					}
					if (temp2 == NULL)
					{
						temp2 = pHead1;
					}
				}
			}			
			return temp1;
		}
	}
}; 