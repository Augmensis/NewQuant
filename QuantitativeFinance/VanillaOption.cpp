#include "VanillaOption.h"
#include <cmath>
#include "Functions.h"


VanillaOption::VanillaOption()
{
	init();
}

VanillaOption::~VanillaOption()
{
}

VanillaOption::VanillaOption(const double& _K, const double& _r, const double& _T, const double& _S, const double & _sigma) {
	K = _K;
	r = _r;
	T = _T;
	S = _S;
	sigma = _sigma;
}


VanillaOption::VanillaOption(const VanillaOption& rhs) {
	copy(rhs);
}

VanillaOption& VanillaOption::operator=(const VanillaOption& rhs) {
	if (this == &rhs) return *this;
	copy(rhs);
	return *this;
}


void VanillaOption::init() {
	K = 100.0;
	r = 0.05;		// 5% interest rate
	T = 1.0;		// One year until maturity
	S = 100.0;		// Option at the money (spot == strike)
	sigma = 0.2;	// 20% volatility
}

void VanillaOption::copy(const VanillaOption& rhs) {
	K = rhs.getK();
	r = rhs.getr();
	T = rhs.getT();
	S = rhs.getS();
	sigma = rhs.getSigma();
}

double VanillaOption::getK() const {
	return K;
}
double VanillaOption::getr() const {
	return r;
}
double VanillaOption::getT() const {
	return T;
}
double VanillaOption::getS() const {
	return S;
}
double VanillaOption::getSigma() const {
	return sigma;
}



double VanillaOption::calc_call_price() const {
	double sigma_sqrt_T = sigma * sqrt(T);
	double d_1 = (log(S / K) + (r + sigma * sigma * 0.5) * T) / sigma_sqrt_T;
	double d_2 = d_1 - sigma_sqrt_T;

	return S * Functions::N(d_1) - K * exp(-r * T) * Functions::N(d_2);
}


double VanillaOption::calc_put_price() const {
	double sigma_sqrt_T = sigma * sqrt(T);
	double d_1 = (log(S / K) + (r + sigma * sigma * 0.5) * T) / sigma_sqrt_T;
	double d_2 = d_1 - sigma_sqrt_T;

	return K * exp(-r * T) * Functions::N(-d_2) - S * Functions::N(-d_1);
}