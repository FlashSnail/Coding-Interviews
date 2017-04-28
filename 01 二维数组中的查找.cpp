/*1����һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int n = array.size();
		int m = array[0].size();
		int i = 0, j = m - 1;
		while (i<n && j >= 0)
		{
			if (array[i][j] == target)
				return true;
			if (array[i][j] < target)
				i++;
			else
				j--;
		}
		return false;
	}
};