#pragma once
#include "PayOff.h"
class PayOffCall : public PayOff
{
	double K;

public:
	PayOffCall(const double K_);
	~PayOffCall();

	virtual double operator() (const double S) const;
};

