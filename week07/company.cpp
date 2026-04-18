#include "company.h"

Company::Company(string name, string telephone)
	: name(name), telephone(telephone)
{
}

Company::~Company()
{
}

string Company::getName() const
{
	return name;
}

string Company::getTelephone() const
{
	return telephone;
}
