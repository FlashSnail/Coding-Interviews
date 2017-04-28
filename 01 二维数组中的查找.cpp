/*1、在一个二维数组中，每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。*/
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