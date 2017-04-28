/*44、牛客最近来了一个新员工Fish，每天早晨总是会拿着一本英文杂志，写些句子在本子上。
同事Cat对Fish写的内容颇感兴趣，有一天他向Fish借来翻看，但却读不懂它的意思。
例如，“student. a am I”。后来才意识到，这家伙原来把句子单词的顺序翻转了，
正确的句子应该是“I am a student.”。Cat对一一的翻转这些单词顺序可不在行，你能帮助他么？*/
class Solution {
public:
	string ReverseSentence(string str) {	//这道题可能是编译环境的不同，本地没有问题，但是OJ总说缺空格
		stack<string> s;
		string temp = "";
		string ans;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ')
			{
				temp += str[i];
			}
			if (str[i] == ' ' || i == str.length() - 1)
			{
				s.push(temp);
				temp = "";
			}
		}
		while (!s.empty())
		{
			ans += s.top();
			ans += " ";
			s.pop();
		}
		ans = ans.substr(0, ans.length() - 1);
		return ans;
		/*	stack<string> Words;
		int currBlankPos = 0;
		int perBlankPos = 0;
		string subString;
		while (currBlankPos >= 0)
		{
		currBlankPos = str.find_first_of(' ', perBlankPos); // 找到空格分隔字符串（找到word压如栈里头）
		subString = str.substr(perBlankPos, currBlankPos < 0 ? (str.length() - perBlankPos) : currBlankPos - perBlankPos); // 按长度截取单词
		perBlankPos = currBlankPos + 1;?
		Words.push(subString); //把单词压如栈
		}
		subString.clear();
		while (!Words.empty())
		{
		subString += Words.top(); Words.pop();
		if (!Words.empty()) subString += " "; // 需不需要加空格?
		}
		return subString;*/
};