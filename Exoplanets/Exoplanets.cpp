#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	int T = 0;
	do
	{
		cin >> T;
	} while (T < 1 || T>20);
	while (T--)
	{
		long double R, h1, h2;
		do {
			cin >> R;
		} while (R < 100 || R>20000);
		do {
			cin >> h1 >> h2;
		} while (h1 < 1 || h1>1000 || h2 < 1 || h2>1000);
		R *= 1000;
		long double L1 = R - h1;
		long double L2 = R - h2;
		long double A1 = acos(L1 / R);
		long double A2 = acos(L2 / R);
		long double A = A1 + A2;
		long double distance = A * R / 1000;
		cout << distance;
	}
	return 0;
}