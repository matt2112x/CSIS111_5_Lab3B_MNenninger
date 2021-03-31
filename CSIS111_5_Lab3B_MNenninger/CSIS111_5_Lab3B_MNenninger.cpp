// Matthew Nenninger
// C++ program to illustrate the iterator
// http link
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> g1;

	for (int i = 1; i <= 5; i++)
		g1.push_back(i);
	
	cout << "Numbers in vector:\n";
	for (int i = 0; i < g1.size(); i++)
		cout << g1[i] << " ";

	cout << "\n\nNumbers in reverse:\n";
	for (int i = g1.size() - 1; i >= 0; i--)
		cout << g1[i] << " ";

	cout << "\n\nEnd of Program\n\n";
	system("pause");
	return 0;
}