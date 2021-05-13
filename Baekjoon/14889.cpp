#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int INF = 1000000000;
const int MAX = 21;

int n; // ��� ��
int minVal = INF;
int abi[MAX][MAX]; // �ɷ�ġǥ
int temp, startScore, linkScore; // ����
bool visited[MAX];

void calc() {
	startScore = 0, linkScore = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (visited[i] && visited[j]) {
				startScore += abi[i][j];
			}
			if (!visited[i] && !visited[j]) {
				linkScore += abi[i][j];
			}
		}
	}
	temp = abs(startScore - linkScore);
	minVal = min(minVal, temp);
}

void dfs(int num, int cnt) {
	if (cnt == n/2) {
		calc();
		return;
	}

	for (int i = num; i <= n; i++) { // i : �� ��ȣ
		visited[i] = true;
		dfs(i+1, cnt + 1);
		visited[i] = false;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> abi[i][j];
		}
	}
	visited[1] = true;
	dfs(2, 1);
	cout << minVal << '\n';
}