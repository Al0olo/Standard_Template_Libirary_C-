#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
	// Vector is considered as template class
	// So if you want to creat an object you need to type the data type you need
	vector <int> v;

	// You can assign size for the victor if you want, it would be somthing like this >
	vector <int> h(4); // Now h contains 4 elements all are zero's.

	for (int i = 0; i < 4; i++)
		cout << h[i] << " ";
	//You can change the default values
	h[1] = 10, h[2] = 20;

	cout << endl;
	for (int i = 0; i < 4; i++)
		cout << h[i] << " ";

	return 0;
}
