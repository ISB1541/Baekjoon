#include <iostream>
#include <cmath>

using namespace std;


int main() {
	int N;
	cin >> N; // N : ����, 100���� 

	int cnt = N; // �Ҽ��� ����
	int input[100] = { 0, }; // input : �Է¹��� ��, 100�� ����

	for (int i = 0; i < N; i++) {
		cin >> input[i];
		if (input[i] == 1) {
			cnt--;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 2; j <= sqrt(input[i]); j++) {
			if (input[i] % j == 0) {
				cnt--;
				break;
			}
		}
	}

	cout << cnt;
	return 0;
 }