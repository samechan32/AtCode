#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, X;
	cin >> N >> X;
	vector<vector<int> > VP(N, vector<int>(2));

	for (int i = 0; i < N; i++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> VP[i][x];
		}
	}

	int a = 0;
	int count = 0;
	int ans = -1;
	for (int i = 0; i < N; i++)
	{
		a += VP[i][0] * VP[i][1];
		count++;
		if (a > X * 100)
		{
			ans = count;
			break;
		}
	}

	cout << ans << endl;

	return 0;
}