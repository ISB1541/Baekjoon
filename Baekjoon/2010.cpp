#include <iostream>

using namespace std;

int main() {
	int N; // ��Ƽ���� ����
	cin >> N;
	
	int a, sum = 1 - N;

	while (N--) {
		cin >> a;
		sum += a;
	}
	
	cout << sum << endl;

	return 0;
}