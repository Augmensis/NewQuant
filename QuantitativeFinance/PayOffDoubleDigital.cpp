#include "PayOffDoubleDigital.h"



PayOffDoubleDigital::PayOffDoubleDigital(const double _U, const double _D)
{
	U = _U;
	D = _D;
}


PayOffDoubleDigital::~PayOffDoubleDigital()
{
}


double PayOffDoubleDigital::operator() (const double S) const {
	if (S >= D && S <= U)
		return S;
	else
		return 0.0;
}