#include<cstdio>
#include<cmath>
#include<algorithm>
#include<stack>
#include<iostream>
#include<iomanip>
#include<cstring>
#include <unordered_map>//���� map ����

using namespace std;

int op[100];
int cunt1 = 0;
int x;//�Ա���

//���ɷ������һ������ʽ��һ���������ֵ
int judge_huona(int a[], int n, int m)//�ݹ����
{
	cunt1 += a[m];
	cunt1 *= x;

	//cout << cunt1 << m << endl;

	if (m < n - 1)
	{
		judge_huona(a, n, m + 1);
	}
	else
	{
		return cunt1 + a[n];
	}
}

int main()
{
	int n;//����ʽ����
	cin >> n;
	for (int i = n; i >=0; i--)
	{
		cin >> op[i];
	}
	cin >> x;

	/*for (int i = 0; i < n + 1; i++)
	{
		cout << op[i] <<" ";
	}*/

	cout << judge_huona(op, n, 0);
	return 0;
}