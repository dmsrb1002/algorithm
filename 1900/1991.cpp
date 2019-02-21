#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Tree {
public:
	int N; // 정점의 개수
	vector<char> parent; // 부모 노드
	vector<char> lc, rc; // 왼쪽 자식, 오른쪽 자식 노드

						// 생성자
	Tree() : N(0) {}
	Tree(int n) : N(n) {
		parent.resize(N, '.');
		lc.resize(N, '.');
		rc.resize(N, '.');
	}

	void setChildren(char p, char l, char r) {
		
		if (l != '.') parent[l - 'A'] = p;
		if (r != '.') parent[r - 'A'] = p;
		lc[p - 'A'] = l;
		rc[p - 'A'] = r;
		
	}

	void preorder(char root) {
		cout << root;
		if (lc[root-'A'] != '.') preorder(lc[root - 'A']);
		if (rc[root-'A'] != '.') preorder(rc[root - 'A']);
	}
	void inorder(char root) {
		if (lc[root - 'A'] != '.') inorder(lc[root - 'A']);
		cout << root;
		if (rc[root - 'A'] != '.') inorder(rc[root - 'A']);
	}
	void postorder(char root) {
		if (lc[root - 'A'] != '.') postorder(lc[root - 'A']);
		if (rc[root - 'A'] != '.') postorder(rc[root - 'A']);
		cout << root;
	}
	
};


int main() {
	int n; cin >> n;
	Tree T(n);
	
	for (int i = 0; i < n; ++i) {
		char root, left, right;
		cin >> root >> left >> right;
		T.setChildren(root, left, right);
	}
	T.preorder('A'); printf("\n");
	T.inorder('A'); printf("\n");
	T.postorder('A'); printf("\n");
	
}
