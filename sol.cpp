#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	long long a, b;
	cin >> a >> b;
	// if there is no 1-burle coin, then the answer is 1
	if(a == 0) {
		cout << "1\n";
		return;
	}
	// otherwise, get the sum of all of the coins and add 1 to get
	// the next number/amount that Vasya cannot pay anymore
	cout << a + 2 * b + 1 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
