/*32、输入一个正整数数组，把数组里所有数字拼接起来排成一个数，
打印能拼接出的所有数字中最小的一个。例如输入数组{3，32，321}，
则打印出这三个数字能排成的最小数字为321323。*/
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
	/*string PrintMinNumber(vector<int> numbers) {		//我感觉没有错，但是OJ连numbers的任何一个元素的不能够索引，不知为何
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