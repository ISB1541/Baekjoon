#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	// start_time, current_time
	string start, cur;
	// �� ��� : ��, ��, ��
	int startInt[3] = { 0 }, curInt[3] = { 0 };

	cin >> start >> cur;

	// ':' ����
	start.erase(remove(start.begin(), start.end(), ':'), start.end());
	cur.erase(remove(cur.begin(), cur.end(), ':'), cur.end());
	
	// ����
	int  j = 0;
	for(int i = 0; i < start.length() / 2; i++) {
		startInt[i] = ((start[j] - '0') * 10) + (start[j+1] - '0');
		curInt[i] = ((cur[j] - '0') * 10) + (cur[j + 1] - '0');
		j= j + 2;
	}

	int hour = 0, min = 0, second = 0, conv1,conv2;

	conv1 = startInt[0] * 3600 + startInt[1] * 60 + startInt[2];
	conv2 = curInt[0] * 3600 + curInt[1] * 60 + curInt[2];
	
	// ���� �ð��� ���� �ð� ��
	if ((conv1 - conv2)<= 0) {
		second = conv2 - conv1;
	}
	else {
		second = conv2 - conv1 + 3600*24;
	}

	if (second >= 3600) {
		hour = second / 3600;
		second %= 3600;
	}

	if (second >= 60) {
		min = second / 60;
		second %= 60;
	}
	
	second = second;

	if (hour < 10) {
		cout << 0;
	}
	cout << hour << ':';
	if (min < 10) {
		cout << 0;
	}
	cout << min << ':';
	if (second < 10) {
		cout << 0;
	}

	cout << second << endl;

	return 0;
}