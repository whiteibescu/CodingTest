#include <iostream>  

using namespace std;

int n = 10;
int arr[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

int main(void) {
    for (int i = 1; i < n; i++) {
        // �ε��� i���� 1���� �����ϸ� �ݺ��ϴ� ����
        for (int j = i; j > 0; j--) {
            // �� ĭ�� �������� �̵�
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
            // �ڱ⺸�� ���� �����͸� ������ �� ��ġ���� ����
            else break;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}