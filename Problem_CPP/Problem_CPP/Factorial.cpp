#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

// �ݺ������� ������ n!
int factorialIterative(int n) {
    int result = 1;
    // 1���� n������ ���� ���ʴ�� ���ϱ�
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// ��������� ������ n!
int factorialRecursive(int n) {
    // n�� 1 ������ ��� 1�� ��ȯ
    if (n <= 1) return 1;
    // n! = n * (n - 1)!�� �״�� �ڵ�� �ۼ��ϱ�
    return n * factorialRecursive(n - 1);
}

int main(void) {
    // ������ ������� ������ n! ���(n = 5)
    cout << "�ݺ������� ����:" << factorialIterative(5) << '\n';
    cout << "��������� ����:" << factorialRecursive(5) << '\n';
}