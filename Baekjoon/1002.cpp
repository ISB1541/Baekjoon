#include <iostream>
#include <cmath>
using namespace std;


int main() {
	int x1, y1, x2, y2; // -10000���� ũ�ų� ���� 100000���� �۰ų� ���� ����
	int r1, r2;// 10000���� �۰ų� ���� �ڿ���
	
	int n, cnt;
	float d; // �� �� ������ �Ÿ�

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); 
		cnt = 0;

		if ((d < r1 + r2) && abs(r2 - r1) < d) { // ������ ���� 2���� ���
			cnt = 2;
		}
		else if (d == r1 + r2 || abs(r2-r1) == d && d != 0) { // ������ ���� 1���� ���
			cnt = 1;
		}
		else if (d > r1 + r2) { //������ ���� ���� ���
			cnt = 0;
		}
		else if (d == 0 && r1 == r2) { // �� ���� ��ġ�ϴ� ���
			cnt = -1;
		}

		cout << cnt << endl;
	}
	return 0;
}