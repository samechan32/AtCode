#include <bits/stdc++.h>
using namespace std;

int main()
{
	int H, W;
	cin >> H >> W;
	vector<vector<int> > A(H, vector<int>(W));
	vector<int> rows(H);
	vector<int> cols(W);

	for (int h = 0; h < H; h++)
	{
		for (int w = 0; w < W; w++)
		{
			cin >> A[h][w];
		}
	}

	for (int h = 0; h < H; h++)
	{
		int s = 0;
		for (int w = 0; w < W; w++)
		{
			s += A[h][w];
		}
		rows[h] = s;
	}

	for (int w = 0; w < W; w++)
	{
		int c = 0;
		for (int h = 0; h < H; h++)
		{
			c += A[h][w];
		}
		// cols.push_back(c);
		cols[w] = c;
	}

	for (int h = 0; h < H; h++)
	{
		for (int w = 0; w < W; w++)
		{
			cout << (rows[h] + cols[w] - A[h][w]);
			cout << " ";
		}
		cout << endl;
	}
}