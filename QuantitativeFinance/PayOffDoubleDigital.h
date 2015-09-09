#pragma once
#include "PayOff.h"

class PayOffDoubleDigital :	public PayOff
{
	double U; // Upper strike
	double D; // Lower strike

public:
	PayOffDoubleDigital(const double U_, const double D_);
	~PayOffDoubleDigital();

	virtual double operator() (const double S) const;

};

