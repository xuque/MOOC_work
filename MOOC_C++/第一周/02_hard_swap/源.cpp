#include <iostream>
using namespace std;

void swap(
	int* &a, int* &b// 在此处补充你的代码
)
{
	int * tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int a = 3, b = 5;
	int * pa = &a;
	int * pb = &b;
	swap(pa, pb);
	cout << *pa << "," << *pb;
	system("pause");
	return 0;
}