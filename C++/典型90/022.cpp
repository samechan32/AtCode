#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long A, B, C;
	cin >> A >> B >> C;

	long long x = __gcd(A, __gcd(B, C));

	cout << (A / x - 1) + (B / x - 1) + (C / x - 1) << endl;
}