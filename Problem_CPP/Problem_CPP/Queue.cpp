#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main(void) {
    // ����(5) - ����(2) - ����(3) - ����(7) - ����() - ����(1) - ����(4) - ����()
    q.push(5);
    q.push(2);
    q.push(3);
    q.push(7);
    q.pop();
    q.push(1);
    q.push(4);
    q.pop();
    // ���� ���� ���Һ��� ����
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }