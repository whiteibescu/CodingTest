#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, k;
vector<int> a, b;

bool compare(int x, int y) {
    return x > y;
}

int main(void) {
    // N�� K�� �Է¹ޱ�
    cin >> n >> k;
    // �迭 A�� ��� ���Ҹ� �Է¹ޱ�
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    // �迭 B�� ��� ���Ҹ� �Է¹ޱ�
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        b.push_back(x);
    }
    // �迭 A�� �������� ���� ����
    sort(a.begin(), a.end());
    // �迭 B�� �������� ���� ����
    sort(b.begin(), b.end(), compare);

    // ù ��° �ε������� Ȯ���ϸ�, �� �迭�� ���Ҹ� �ִ� K�� �� 
    for (int i = 0; i < k; i++) {
        // A�� ���Ұ� B�� ���Һ��� ���� ���
        if (a[i] < b[i]) swap(a[i], b[i]); // �� ���Ҹ� ��ü
        // A�� ���Ұ� B�� ���Һ��� ũ�ų� ���� ��, �ݺ����� Ż��
        else break;
    }

    // �迭 A�� ��� ������ ���� ���
    long long result = 0;
    for (int i = 0; i < n; i++) {
        result += a[i];
    }
    cout << result << '\n';
}