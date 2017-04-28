/*65、请设计一个函数，用来判断在一个矩阵中是否存在一条包含某字符串所有字符的路径。
路径可以从矩阵中的任意一个格子开始，每一步可以在矩阵中向左，向右，向上，向下移动一个格子。
如果一条路径经过了矩阵中的某一个格子，则该路径不能再进入该格子。
例如[a b c e s f c s a d e e]是3*4矩阵，其包含字符串"bcced"的路径，
但是矩阵中不包含“abcb”路径，因为字符串的第一个字符b占据了矩阵中的第一行第二个格子之后，
路径不能再次进入该格子。*/
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