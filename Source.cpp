#include <list>
#include <iostream>
using namespace std;
typedef list<int> List;
int main()
{
	List a;
	int n;
	cin >> n;
	for (int i = 0; i<n; i++)
		a.push_back(rand() % 20);
	
	List::iterator i = a.begin();
	List::reverse_iterator j = a.rbegin();

	for (i, j; i != a.end(), j != a.rend(); ++i, ++j)
		if (!a.empty())
			cout << *i << " " << *j <<" ";

	cout << endl;
	system("pause");
	return 0;
}