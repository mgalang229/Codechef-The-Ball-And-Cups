#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, c, q;
		cin >> n >> c >> q;
		// view the image in this repisitory for derivation of formula
		for (int i = 0; i < q; i++) {
			long long l, r;
			cin >> l >> r;
			// if 'c' falls in between the range of 'l' and 'r' (inclusive),
			if (c >= l && c <= r) {
				// let: c = initial position
				//	x = final position
				// then the absolute distance between 'l' and 'c' (before swapping)
				// will be equal to do absolute distance between 'r' and 'x' (after swapping)
				// and to find the new position, simply solve for the value of 'x' and that
				// will be its new position in the sequence
				c = (l + r - c);
			}
		}
		cout << c << '\n';
	}
	return 0;
}
