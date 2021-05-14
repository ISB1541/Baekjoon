#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;
const int MAX = 101;

vector<int> network[MAX]; // ����� ��Ʈ��ũ
int n, m; // ��ǻ�� ��, ��Ʈ��ũ ���� ���� ����� ��ǻ�� ���� ��
int num1, num2; //  ���� ����� ��ǻ�� ��ȣ ��
bool visited[MAX]; // �湮 ����
bool flag;
queue<int> q; 

void visit(int node) {
	visited[node] = true;
	q.push(node);
}

void bfs(int cnt) {
	visit(1); // 1�� ��ǻ��

	while (!q.empty()) {
		int node = q.front(); // 
		q.pop();
		for (auto i : network[node]) { // 1�� �������� �� �� �ִ� ���, 2 5
			if (!visited[i]) {
				visit(i);
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}

int main() {
	cin >> n >> m;

	for (int i = 1; i <= m; i++) {
		cin >> num1 >> num2;
		network[num1].push_back(num2);
		network[num2].push_back(num1);
	}
	
	bfs(0);
	
	return 0;
}