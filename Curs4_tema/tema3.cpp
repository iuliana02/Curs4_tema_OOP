#include "tema3.h"

Shape::Shape()
{
}
Shape::Shape(string name, double flache)
{
	this->name = name;
	this->flache = flache;
}

string Shape::get_name()const
{
	return this->name;
}
double Shape::get_flache()const
{
	return this->flache;
}
void Shape::set_name(string name)
{
	this->name = name;
}
void Shape::set_flache(double fl)
{
	this->flache = fl;
}

Shape::~Shape()
{
}