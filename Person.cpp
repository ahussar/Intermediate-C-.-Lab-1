#include "Person.h"



Person::Person()
{
	age = 0;
	height = 0.0;
	weight = 0.0;
}

Person::Person(string n, int a, double h, double w)
{
	name = n;
	age = a;
	height = h;
	weight = w;
}

void Person::setName(string n)
{
	name = n;
}

string Person::getName()
{
	return name;
}

int Person::getAge()
{
	return age;
}

double Person::getHeight()
{
	return height;
}

double Person::getWeight()
{
	return weight;
}


Person::~Person()
{
}
