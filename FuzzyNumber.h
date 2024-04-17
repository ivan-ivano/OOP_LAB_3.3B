#pragma once
#include <iostream>
#include <string>
#include "Triad.h"


class FuzzyNumber : public Triad
{
private:
	Triad t;

public:
	FuzzyNumber();
	FuzzyNumber(int x, int l, int r);
	FuzzyNumber(const FuzzyNumber& v);

	FuzzyNumber& operator= (const FuzzyNumber& obj);

	FuzzyNumber& operator++ ();
	FuzzyNumber& operator-- ();

	FuzzyNumber operator++ (int);
	FuzzyNumber operator-- (int);

	operator std::string() const;

	friend FuzzyNumber operator+ (const FuzzyNumber& a, const FuzzyNumber& b);
	friend FuzzyNumber operator* (const FuzzyNumber& a, const FuzzyNumber& b);

};

