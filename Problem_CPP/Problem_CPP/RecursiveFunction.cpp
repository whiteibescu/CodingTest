#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void recursiveFunction() {
    cout << "��� �Լ��� ȣ���մϴ�." << '\n';
    recursiveFunction();
}

int main(void) {
    recursiveFunction();
}