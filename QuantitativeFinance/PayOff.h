#pragma once
#include <algorithm>

class PayOff
{
public:
	PayOff();
	~PayOff();

	virtual double operator() (const double S) const = 0;
		
};

