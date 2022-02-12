#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, a, b, ans;
	cin >> N;
	vector<int> A;
	vector<int> B;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		A.push_back(a);
	}

	for (int i = 0; i < N; i++)
	{
		cin >> b;
		B.push_back(b);
	}

	for (int i = 0; i < N; i++)
	{
		ans += A[i] * B[i];
	}

	if (ans == 0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}