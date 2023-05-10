#include<cstdio>
#include<cmath>
#include<algorithm>
#include<stack>
#include<iostream>
#include<iomanip>
#include<cstring>
#include <unordered_map>//无序 map 容器

using namespace std;

int op[100];
int cunt1 = 0;
int x;//自变量

//霍纳法则求解一个多项式在一个给定点的值
int judge_huona(int a[], int n, int m)//递归计算
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
	int n;//多项式次数
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