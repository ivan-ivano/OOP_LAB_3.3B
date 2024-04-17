#include "FuzzyNumber.h"
#include <iostream>
#include <string>
#include <sstream>

FuzzyNumber::FuzzyNumber()
{
	x = 0;
	l = 0;
	r = 0;
}

FuzzyNumber::FuzzyNumber(int x, int l, int r)
{
	this->x = x;
	this->l = l;
	this->r = r;
}

FuzzyNumber::FuzzyNumber(const FuzzyNumber& v)
{
	x = v.x;
	l = v.l;
	r = v.r;
}

FuzzyNumber& FuzzyNumber::operator= (const FuzzyNumber& obj)
{
	x = obj.x;
	l = obj.l;
	r = obj.r;

	return *this;
}

FuzzyNumber& FuzzyNumber::operator++ ()
{
	x++;
	l++;
	r++;
	return *this;
}

FuzzyNumber& FuzzyNumber::operator-- ()
{
	x--;
	l--;
	r--;
	return *this;
}

FuzzyNumber FuzzyNumber::operator++ (int)
{
	FuzzyNumber t(*this);
	++x;
	++l;
	++r;
	return t;
}

FuzzyNumber FuzzyNumber::operator-- (int)
{
	FuzzyNumber t(*this);
	--x;
	--l;
	--r;
	return t;
}

FuzzyNumber::operator std::string() const
{
	std::stringstream sout;
	sout << "( " << x - l << " , " << x << " , " << x + r << " )";
	return sout.str();
}

FuzzyNumber operator+ (const FuzzyNumber& a, const FuzzyNumber& b)
{
	FuzzyNumber t;
	t.x = a.x + b.x;
	t.l = a.l + b.l;
	t.r = a.r + b.r;
	return t;
}

FuzzyNumber operator* (const FuzzyNumber& a, const FuzzyNumber& b)
{
	FuzzyNumber t;
	t.x = a.x * b.x;
	t.l = a.l * b.l;
	t.r = a.r * b.r;
	return t;
}


