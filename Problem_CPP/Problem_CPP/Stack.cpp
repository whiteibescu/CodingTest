#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main(void) {
    // ����(5) - ����(2) - ����(3) - ����(7) - ����() - ����(1) - ����(4) - ����()
    s.push(5);
    s.push(2);
    s.push(3);
    s.push(7);
    s.pop();
    s.push(1);
    s.push(4);
    s.pop();
    // ������ �ֻ�� ���Һ��� ���
    while (!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }