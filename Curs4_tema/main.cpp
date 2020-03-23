#include <vector>
#include <string>
#include <algorithm>
#include<iostream>
#include "tema3.h"
using namespace std;

//Ex 1
template <typename T>
T func(T arr[], int start, int end, T anfangswert)
{
	T s = 0;
	for (int i = start; i <= end; i++)
		s += arr[i];
	return s + anfangswert;
}

//Ex 2
template <typename T>
T lambda(T v[], int start, int end, T anfangswert)
{
	std::vector<T> n;
	for (int i = start; i < end; i++)
		n.push_back(v[i]);
	std::for_each(n.begin(), n.end(), [&anfangswert](T x) {anfangswert += x; });
	return anfangswert;
}

//Ex 3
template <typename F>
void apply(std::vector <Shape*> vec, F f)
{
	std::for_each(vec.begin(), vec.end(), f);
}

int main()
{
	cout << "Tema 1:  ";
	int v[10] = { 10,2,3,4,5 };
	cout << func(v, 0, 2, 20) << endl;

	cout << "Tema 2: ";
	cout << lambda(v, 1, 4, 10);
	cout << endl;

	cout << "Tema 3: "<<endl;
	Shape x = Shape("cerc", 2.5);
	Shape* x1 = &x;
	Shape y = Shape("patrat", 3.9);
	Shape* y1 = &y;
	Shape z = Shape("triunghi", 7.7);
	Shape* z1 = &z;

	vector <Shape*> V = { x1,y1,z1 };

	apply(V, Mult(100));
	apply(V, To_str());
	apply(V, Div(10));
}