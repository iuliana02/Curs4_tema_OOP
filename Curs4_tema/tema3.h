#pragma once
#include <iostream>
#include <string>

using namespace std;
class Shape
{
private:
	string name;
	double flache;

public:
	Shape();//constructor
	Shape(string name, double flache);
	//gettere si settere
	string get_name()const;
	void set_name(string name);
	double get_flache()const;
	void set_flache(double fl);
	~Shape();
};


class Mult
{
private:
	double x;
public:
	//functor pt inmultire
	//multipliziert ein Element mit x
	Mult(double elem) : x(elem) {}
	double operator () (Shape* S) const {
		S->set_flache(S->get_flache() * x);
		return S->get_flache();
	}
};

class Div
{
private:
	double y;
public:
	//functor pt impartire
	Div(double elem) : y(elem) {}
	double operator () (Shape* S) const {
		S->set_flache(S->get_flache() / y);
		return S->get_flache();
	}
};

class To_str
{
public:
	//functor pt transformare in string
	void operator() (Shape* S) const {
		cout << S->get_name() << " " << S->get_flache() << "!"<<endl;
	}
};