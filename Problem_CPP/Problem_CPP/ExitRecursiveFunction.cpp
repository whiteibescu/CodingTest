#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void recursiveFunction(int i) {
    // 100��° ȣ���� ���� �� ����ǵ��� ���� ���� ���
    if (i == 100) return;
    cout << i << "��° ��� �Լ����� " << i + 1 << "��° ����Լ��� ȣ���մϴ�." << '\n';
    recursiveFunction(i + 1);
    cout << i << "��° ��� �Լ��� �����մϴ�." << '\n';
}

int main(void) {
    recursiveFunction(1);
}