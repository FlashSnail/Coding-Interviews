/*44��ţ���������һ����Ա��Fish��ÿ���糿���ǻ�����һ��Ӣ����־��дЩ�����ڱ����ϡ�
ͬ��Cat��Fishд�������ĸ���Ȥ����һ������Fish������������ȴ������������˼��
���磬��student. a am I������������ʶ������һ�ԭ���Ѿ��ӵ��ʵ�˳��ת�ˣ�
��ȷ�ľ���Ӧ���ǡ�I am a student.����Cat��һһ�ķ�ת��Щ����˳��ɲ����У����ܰ�����ô��*/
class Solution {
public:
	string ReverseSentence(string str) {	//���������Ǳ��뻷���Ĳ�ͬ������û�����⣬����OJ��˵ȱ�ո�
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
		currBlankPos = str.find_first_of(' ', perBlankPos); // �ҵ��ո�ָ��ַ������ҵ�wordѹ��ջ��ͷ��
		subString = str.substr(perBlankPos, currBlankPos < 0 ? (str.length() - perBlankPos) : currBlankPos - perBlankPos); // �����Ƚ�ȡ����
		perBlankPos = currBlankPos + 1;?
		Words.push(subString); //�ѵ���ѹ��ջ
		}
		subString.clear();
		while (!Words.empty())
		{
		subString += Words.top(); Words.pop();
		if (!Words.empty()) subString += " "; // �費��Ҫ�ӿո�?
		}
		return subString;*/
};