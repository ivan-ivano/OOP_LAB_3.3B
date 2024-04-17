#include "Triad.h"

Triad::Triad()
{
	x = 0;
	l = 0;
	r = 0;
}

Triad::Triad(int x, int l, int r)
{
	this->x = x;
	this->l = l;
	this->r = r;
}

Triad::Triad(const Triad& v)
{
	x = v.x;
	l = v.l;
	r = v.r;
}

void Triad::Set_x(int value)
{
	x = value;
}

void Triad::Set_l(int value)
{
	l = value;
}

void Triad::Set_r(int value)
{
	r = value;
}

int Triad::Get_x() const
{
	return x;
}

int Triad::Get_l() const
{
	return l;
}

int Triad::Get_r() const
{
	return r;
}

bool Triad::operator==(const Triad& n)
{
	return x == n.x && l == n.l && r == n.r;
}

bool Triad::operator!=(const Triad& n)
{
	return !(*this == n);
}

bool Triad::operator>(const Triad& n)
{
	return x > n.x || (x == n.x && l > n.l) || (x == n.x && l == n.l && r > n.r);
}


bool Triad::operator<(const Triad& n)
{
	return x < n.x || (x == n.x && l < n.l) || (x == n.x && l == n.l && r < n.r);
}

bool Triad::operator>=(const Triad& n)
{
	return !(*this < n);
}

bool Triad::operator<=(const Triad& n)
{
	return !(*this > n);
}


Triad::operator std::string() const
{
	std::stringstream ss;
	ss << "x = " << x << std::endl;
	ss << "l = " << l << std::endl;
	ss << "r = " << r << std::endl;
	return ss.str();
}

std::ostream& operator<<(std::ostream& out, const Triad& obj)
{
	std::cout << std::endl;
	out << std::string(obj) << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Triad& obj)
{
	std::cout << std::endl;
	int x, l, r;
	std::cout << "x = "; in >> x;
	std::cout << "l = "; in >> l;
	std::cout << "r = "; in >> r;
	obj.Set_x(x);
	obj.Set_l(l);
	obj.Set_r(r);
	return in;
}
