#include <iostream>
using namespace std;

int main()
{
	int * a[] = { NULL,NULL,new int[3], new int[6]   //指针数组
		// 在此处补充你的代码
	};

	*a[2] = 123;
	a[3][5] = 456;
	if (!a[0]) {
		cout << *a[2] << "," << a[3][5];
	}
	system("pause");
	return 0;
}