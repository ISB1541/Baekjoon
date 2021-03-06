#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1001;

int n, m;
vector<int> stack;
bool visited[MAX];


void dfs() {
	if (stack.size() == m) {
		for (auto i : stack) {
			cout << i << ' ';
		}
		cout << endl;
		return;
	}
	for (int i = 1; i < n + 1; i++) {
		if (!visited[i] && (stack.size() == 0 || stack.back() < i)) {
			stack.push_back(i);
			visited[i] = true;
			dfs();
			stack.pop_back();
			visited[i] = false;
		}
	}
}

int main() {
	cin >> n >> m;
	dfs();
}