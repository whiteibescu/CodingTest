#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// ��(Row)�� 3���� ���� ����Ʈ ǥ��
vector<pair<int, int> > graph[3];

int main(void) {
    // ��� 0�� ����� ��� ���� ���� {���, �Ÿ�}
    graph[0].push_back({ 1, 7 });
    graph[0].push_back({ 2, 5 });

    // ��� 1�� ����� ��� ���� ���� {���, �Ÿ�}
    graph[1].push_back({ 0, 7 });

    // ��� 2�� ����� ��� ���� ���� {���, �Ÿ�}
    graph[2].push_back({ 0, 5 });

    // �׷��� ���
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < graph[i].size(); j++) {
            cout << '(' << graph[i][j].first << ',' << graph[i][j].second << ')' << ' ';
        }
        cout << '\n';
    }
}