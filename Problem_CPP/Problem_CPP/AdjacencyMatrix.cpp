#include <iostream>
#define INF 999999999 // ������ ��� ����

using namespace std;

// 2���� ����Ʈ�� �̿��� ���� ��� ǥ��
int graph[3][3] = {
    {0, 7, 5},
    {7, 0, INF},
    {5, INF, 0}
};

int main(void) {
    // �׷��� ���
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }
}