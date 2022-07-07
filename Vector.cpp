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

	// One of the functions in vector is push_back which allow you to append one element in the vector.
	h.push_back(50);

	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << h[i] << " ";

	// Another way to initialize the vector is
	vector <int> a = { 1,2,3,4,5 };

	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";

	// Another way is to copy elements of another vector
	vector <int> a2(a);

	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << a2[i] << " ";

	// Another way is to pass two parameters in the constructor one for size another for the default value.
	vector <int>c(5, 10);

	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << c[i] << " ";

	// One another function in vector is swap, which allows you to swap two vectors
	a.swap(c);

	cout << endl;
	for (int i = 0; i < 5; i++)
		cout << c[i] << " ";

	return 0;
}
