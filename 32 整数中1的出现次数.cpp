/*32������һ�����������飬����������������ƴ�������ų�һ������
��ӡ��ƴ�ӳ���������������С��һ����������������{3��32��321}��
���ӡ���������������ųɵ���С����Ϊ321323��*/
class Solution {
public:
	static bool cmp(int a, int b){
			string A = "";
			string B = "";
			A += to_string(a);
			A += to_string(b);
			B += to_string(b);
			B += to_string(a);
			return A<B;
		}
	string PrintMinNumber(vector<int> numbers) {
			string answer = "";
			sort(numbers.begin(), numbers.end(), cmp);
			for (int i = 0; i<numbers.size(); i++){
				answer += to_string(numbers[i]);
			}
			return answer;
		}
	};
	/*string PrintMinNumber(vector<int> numbers) {		//�Ҹо�û�д�����OJ��numbers���κ�һ��Ԫ�صĲ��ܹ���������֪Ϊ��
		sort(numbers.begin(), numbers.end());
		string preTemp, backTemp;
		int smaller;
		string ans;
		while (numbers.begin() != numbers.end())
		{
			preTemp = to_string(*numbers.begin()) + to_string(*(numbers.begin() + 1));
			backTemp = to_string(*(numbers.begin() + 1)) + to_string(*numbers.begin());
			if (preTemp > backTemp)
			{
				smaller = atoi(backTemp.c_str());
				numbers.erase(numbers.begin(), numbers.begin() + 1);
				numbers.insert(numbers.begin(), smaller);
			}
			else
			{
				smaller = atoi(preTemp.c_str());
				numbers.erase(numbers.begin(), numbers.begin() + 1);
				numbers.insert(numbers.begin(), smaller);
			}
		}
		ans = to_string(numbers.front());
		return ans;
	}
};*/