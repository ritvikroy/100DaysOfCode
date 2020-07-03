class Solution {
public:
	vector<int> prisonAfterNDays(vector<int>& cells, int N) {
		vector<int> temp;
		if (N % 14 == 0) N = 14;
		else N = N % 14;
		for (int i = 1; i <= N; i++) {
			temp.push_back(0);
			for (int j = 1; j < 7; j++) {
				if (cells[j - 1]^cells[j + 1]) temp.push_back(0);
				else temp.push_back(1);
			}
			temp.push_back(0);
			cells = temp;
			temp.clear();
		}
		return cells;
	}
};
