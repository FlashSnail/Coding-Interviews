/*43�������������һ����λָ�����ѭ�����ƣ�ROL���������и��򵥵�����
�������ַ���ģ�����ָ���������������һ���������ַ�����S��
�������ѭ������Kλ���������������磬�ַ�����S=��abcXYZdef��,
Ҫ�����ѭ������3λ��Ľ��������XYZdefabc�����ǲ��Ǻܼ򵥣�OK���㶨����*/
class Solution {
public:
string LeftRotateString(string str, int n) {
		int index;
		int len = str.length();
		string temp = str;
		for (int i = 0; i < len; i++)
		{
			index = (i + len - n) % len;
			temp[index] = str[i];
		}
		return temp;
	}
};