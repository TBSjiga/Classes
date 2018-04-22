#include <iostream>
using namespace std;

class Property 
{
protected:
	double worth;
public:
	Property();
	virtual double NOLOG_calculation() { return worth; };
};

Property::Property()
{
	double a;
	cin >> a;
	worth = a;
}

class Appartament:public Property
{
public:
	Appartament() : Property() {}
	double NOLOG_calculation()
	{
		return worth / 1000;
	}
};

class Car:public Property
{
public:
	Car() : Property() {}
	double NOLOG_calculation()
	{
		return worth / 200;
	}
};

class CountryHouse:public Property
{
public:
	CountryHouse() : Property() {}
	double NOLOG_calculation()
	{
		return worth / 500;
	}
};

int main()
{
	Property* Array[6];
	Array[0] = new Appartament();
	Array[1] = new Appartament();
	Array[2] = new Appartament();
	Array[3] = new Car();
	Array[4] = new Car();
	Array[5] = new CountryHouse();
	Array[6] = new CountryHouse();
	for (int i = 0; i < 7; i++)
	{
		cout << "NOLOG of " << i++ << " property is " << Array[i]->NOLOG_calculation() << endl;
		i--;
	}
	delete Array[6];
	system("pause");
	return 0;
}