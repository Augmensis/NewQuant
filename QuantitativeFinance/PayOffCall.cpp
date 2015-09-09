#include "PayOffCall.h"



PayOffCall::PayOffCall(const double _K)
{
	K = _K;
}


PayOffCall::~PayOffCall()
{
}

// Standard European call payoff
double PayOffCall::operator() (const double S) const {
	return std::max(S - K, 0.0); 
}
