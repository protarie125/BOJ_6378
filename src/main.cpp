#include <iostream>
#include <string>

using namespace std;

int addDigit(const string& x) {
	auto ans = int{ 0 };
	for (const auto& d : x) {
		ans += d - '0';
	}

	return ans;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto x = string{};
	cin >> x;
	while ("0" != x) {
		auto v = addDigit(x);
		while (10 <= v) {
			x = to_string(v);
			v = addDigit(x);
		}

		cout << v << '\n';

		cin >> x;
	}

	return 0;
}