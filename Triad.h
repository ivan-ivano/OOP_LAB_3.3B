//triad.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>

class Triad
{
protected:
	int x, l, r;

public:
	Triad();
	Triad(int x, int l, int r);
	Triad(const Triad& v);

	void Set_x(int value);
	void Set_l(int value);
	void Set_r(int value);

	int Get_x() const;
	int Get_l() const;
	int Get_r() const;

	bool operator==(const Triad& n);
	bool operator!=(const Triad& n);
	bool operator>=(const Triad& n);
	bool operator<=(const Triad& n);
	bool operator>(const Triad& n);
	bool operator<(const Triad& n);



	operator std::string() const;

	friend std::ostream& operator<< (std::ostream& out, const Triad& obj);
	friend std::istream& operator>> (std::istream& in, Triad& obj);
};

