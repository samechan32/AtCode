#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, C, P, c1, c2;
	cin >> N;
	vector<int> CP1(N + 2);
	vector<int> CP2(N + 2);
	CP1[0] = 0;
	CP2[0] = 0;
	c1 = 1;
	c2 = 1;
	for (int i = 1; i < N + 1; i++)
	{
		cin >> C >> P;
		if (C == 1)
		{
			CP1[c1] = CP1[c1 - 1] + P;
			CP2[c2] = CP2[c2 - 1];
		}
		else
		{
			CP2[c2] = CP2[c2 - 1] + P;
			CP1[c1] = CP1[c1 - 1];
		}
		c1++;
		c2++;
	}

	int Q;
	cin >> Q;
	vector<vector<int> > LR(Q, vector<int>(2));
	for (int i = 0; i < Q; i++)
	{
		cin >> LR[i][0];
		cin >> LR[i][1];
	}

	int L, R, a1, a2;
	for (int i = 0; i < Q; i++)
	{
		a1 = CP1[LR[i][1]] - CP1[LR[i][0] - 1];
		// cout << CP1[LR[i][1]] << endl;
		a2 = CP2[LR[i][1]] - CP2[LR[i][0] - 1];
		// cout << CP2[LR[i][1]] << endl;
		cout << a1 << ' ' << a2 << endl;
	}
}