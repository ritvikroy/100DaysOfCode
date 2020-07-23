class Solution {
public:
	int oddCells(int n, int m, vector<vector<int>>& indices) {
		vector<int> col(m);
		vector<int> row(n);
		for(auto& indice:indices)
		{
			col[indice[1]]^=1;
			row[indice[0]]^=1;

		}
		int ans=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				ans+=row[i]^col[j];
			}
		return ans;

	}
};
