#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	int M, N; // M�̻� N���� �Ҽ����� �հ� �ּڰ�
	cin >> M >> N;
	vector<int> v; //�Ҽ����� ����

	for (int i = M; i <= N; i++) { // M�� N����
		bool is_prime = true;
		for (int j = 2; j <= sqrt(i); j++) { // 2���� �ڽ��� �����ٱ���
			if (i % j == 0) is_prime = false;
		}
		if (is_prime && i != 1) {
			v.push_back(i);
		}
	}

	int sum = 0;
	if (v.empty()) { // �Ҽ��� �ϳ��� ���ٸ�
		cout << -1;
	}
	else {
		for (int i = 0; i < v.size(); i++) {
			sum += v[i]; 
		}
		cout << sum << endl; // �Ҽ����� ��
		cout << v.front() << endl; // �ּڰ�
	}

	return 0;
}
/*
int main() {
	int M, N; // M�̻� N���� �Ҽ����� �հ� �ּڰ�
	cin >> M >> N;

	for (int i = M; i <= N; i++) { // M�� N����
		bool is_prime = true;
		for (int j = 2; j <= sqrt(i); j++) { // 2���� �ڽ��� �����ٱ���
			if (i % j == 0) is_prime = false;
		}
		if (is_prime && i != 1) {
			sum += i;
			if( min > i) {
				min = i;
			}
		}
	}

	if(sum == 0) {
		cout << -1;
	} else {
		cout << sum << endl << min;
	}

	return 0;
}*/