#include <iostream>
#include <cmath>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	double num1, num2;
	cin >> num1 >> num2;
	cout << num1 * (num2 - 1) + 1;
}