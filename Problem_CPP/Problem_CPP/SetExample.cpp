#include <bits/stdc++.h>

using namespace std;

// N(������ ��ǰ ����)�� M(�մ��� Ȯ�� ��û�� ��ǰ ����)
int n, m;
// ���԰� �ִ� ��ü ��ǰ ��ȣ�� ���� ����(set) �����̳�
set<int> s;
vector<int> targets;

int main(void) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;
        targets.push_back(target);
    }
    // �մ��� Ȯ�� ��û�� ��ǰ ��ȣ�� �ϳ��� Ȯ��
    for (int i = 0; i < m; i++) {
        // �ش� ��ǰ�� �����ϴ��� Ȯ��
        if (s.find(targets[i]) != s.end()) {
            cout << "yes" << ' ';
        }
        else {
            cout << "no" << ' ';
        }
    }
}