#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

void recursiveFunction() {
    cout << "재귀 함수를 호출합니다." << '\n';
    recursiveFunction();
}

int main(void) {
    recursiveFunction();
}