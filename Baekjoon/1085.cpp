#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x, y, w, h; // (x,y) : ���� ��ǥ, (w,h) : ���簢�� ������
	cin >> x >> y >> w >> h;

	int minX = min(x, w - x);
	int minY = min(y, h - y);

	cout << min(minX, minY);
	return 0;
}