
/* 
���� 3-1 �Ž�����

����
����� �������� ����� �����ִ� �����̴�. ī���Ϳ��� �Ž��������� 
����� 500��, 100��, 50��, 10��¥�� ������ ������ �����Ѵٰ� �����Ѵ�. 
�մԿ��� �Ž��� ��� �� ���� N���� �� �Ž������ �� ������ �ּ� ������ ���϶�. 
��, �Ž��� ��� �� �� N�� �׻� 10�� ����̴�.

�ش�
���� ū ȭ�� �������� ���� �Ž��� �ִ� ���̴�.*/

#include <iostream>

int main()
{
	int n = 1260;
	int cnt = 0;
    int coin_Types[4] = { 500, 100, 50, 10 };

	for (int i = 0; i < 4; ++i)
	{
		int coin = coin_Types[i];
		cnt += n / coin;
		n %= coin;
	}
	printf("������� %d", cnt);

}

//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n = 1260;
//int cnt = 0;
//int coinTypes[4] = { 500, 100, 50, 10 };
//
//int main() {
//    for (int i = 0; i < 4; i++) {
//        int coin = coinTypes[i];
//        cnt += n / coin;
//        n %= coin;
//    }
//    cout << cnt << '\n';
//}