/*20、定义栈的数据结构，请在该类型中实现一个能够得到栈最小元素的min函数*/
class Solution {
public:
	stack<int> data,ans;
	void push(int value) {
		if (data.empty())
		{
			data.push(value);
			ans.push(value);
		}
		else
		{
			data.push(value);
			if (value <= ans.top())
			{
				ans.push(value);
			}
		}		
	}
	void pop() {
		if (data.top() == ans.top())
		{
			data.pop();
			ans.pop();
		}
		else
		{
			data.pop();
		}
	}
	int top() {
		return data.top();
	}
	int min() {
		return ans.top();
	}
};