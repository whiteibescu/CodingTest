#include <iostream> 
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
int result;

int main() {
    // N, M�� ������ �������� �����Ͽ� �Է� �ޱ�
    cin >> n >> m;

    // �� �پ� �Է� �޾� Ȯ���ϱ�
    for (int i = 0; i < n; i++) {
        // ���� �ٿ��� '���� ���� ��' ã��
        int min_value = 10001;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            min_value = min(min_value, x);
        }
        // '���� ���� ��'�� �߿��� ���� ū �� ã��
        result = max(result, min_value);
    }

    cout << result << '\n'; // ���� ��� ���
}