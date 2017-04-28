/*65�������һ�������������ж���һ���������Ƿ����һ������ĳ�ַ��������ַ���·����
·�����ԴӾ����е�����һ�����ӿ�ʼ��ÿһ�������ھ������������ң����ϣ������ƶ�һ�����ӡ�
���һ��·�������˾����е�ĳһ�����ӣ����·�������ٽ���ø��ӡ�
����[a b c e s f c s a d e e]��3*4����������ַ���"bcced"��·����
���Ǿ����в�������abcb��·������Ϊ�ַ����ĵ�һ���ַ�bռ���˾����еĵ�һ�еڶ�������֮��
·�������ٴν���ø��ӡ�*/
class Solution {
public:
	bool hasPath(char* matrix, int rows, int cols, char* str)
	{
		vector<vector<char>> maze;
		vector<char> temp;
		for (int i = 0; i <= cols + 1; i++)
		{
			temp.push_back(1);
		}
		maze.push_back(temp);
		temp.clear();
		int index = 0;
		int r = 0, c = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				temp.push_back(1);
				temp.push_back(matrix[j + i * cols]);
				temp.push_back(1);
			}			
			maze.push_back(temp);
			temp.clear();
		}
		for (int i = 0; i <= cols + 1; i++)
		{
			temp.push_back(1);
		}
		maze.push_back(temp);
		temp.clear();
		for (r = 0; r < rows; r++)
		{
			if (maze[r][c] == str[index])
			{
				break;
			}
			for (c = 0; c < cols; c++)
			{
				if (maze[r][c] == str[index])
				{
					break;
				}
			}
		}
		
	}
};