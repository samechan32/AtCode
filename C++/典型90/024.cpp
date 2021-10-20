#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K, a, b;
	cin >> N >> K;
	vector<int> A(N);
	vector<int> B(N);
	long long sum_ab = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		A[i] = a;
	}

	for (int i = 0; i < N; i++)
	{
		cin >> b;
		B[i] = b;
		sum_ab += max(A[i], b) - min(A[i], b);
	}

	if (((K - sum_ab) % 2 == 0 && sum_ab < K) | (K - sum_ab == 0))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}