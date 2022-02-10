#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double a;
	cin >> a;

	cout << fixed << setprecision(8) <<  sqrt(a) * 4;

	return 0;
}