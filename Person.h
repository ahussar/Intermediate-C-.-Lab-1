#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(string n, int a, double h, double w);
	void setName(string n);
	string getName();
	int getAge();
	double getHeight();
	double getWeight();
	~Person();
private:
	string name;
	int age;
	double height;
	double weight;
};

