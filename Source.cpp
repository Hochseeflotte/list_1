#include <list>  
#include <iostream>  
using namespace std;
int main() {
	int n;
	cin >> n;
	list <int> a;
	cout << "size at first: " << a.size() << endl;
	for (int i = 0; i < n; i++)
	{
		a.push_back(rand() % 10);
	}
	
	cout << "size at middle: " << a.size() << endl;
	a.clear();
	cout << "size at the end: " << a.size() << endl;
	system("pause");
	return 0;
}