#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, k;
vector<int> v;

int main() {
    // N, M, K�� ������ �������� �����Ͽ� �Է� �ޱ�
    cin >> n >> m >> k;

    // N���� ���� ������ �������� �����Ͽ� �Է� �ޱ�
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end()); // �Է� ���� ���� �����ϱ�
    int first = v[n - 1]; // ���� ū ��
    int second = v[n - 2]; // �� ��°�� ū ��
    
    // ���� ū ���� �������� Ƚ�� ���
    int cnt = (m / (k + 1)) * k;
    cnt += m % (k + 1);

    int result = 0;
    result += cnt * first; // ���� ū �� ���ϱ�
    result += (m - cnt) * second; // �� ��°�� ū �� ���ϱ�

    cout << result << '\n'; // ���� ��� ���
}