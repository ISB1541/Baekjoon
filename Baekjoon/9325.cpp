#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	int s, n, q, p, sum; // ����, �ɼ��� ����, Ư�� �ɼ��� ����, �ش� �ɼ��� ����
	
	while (T--) {
		sum = 0;
		cin >> s >> n;
		sum += s;
		while (n--) {
			cin >> q >> p;
			sum += q * p;
		}
		
		cout << sum << endl;
	}

	return 0;
}