#include <iostream>
using namespace std;
string c = "0123456789ABCDEF";//��Ӧ�ַ���
void f(int x, int m) {  //xΪʮ��������   mҪת���Ľ��ƻ���
	if (x / m) f(x / m, m);//�����ݹ顣
	cout << c[x % m];//���������
}
int main() {
	int x, m;
	cin >> x >> m;//���롣
	f(x, m);//�ݹ顣
	return 0;
}
