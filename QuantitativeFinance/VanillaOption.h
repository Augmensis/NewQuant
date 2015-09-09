#pragma once
class VanillaOption
{
	void init();
	void copy(const VanillaOption& rhs);
	
	double K;		// Strike Price
	double r;		// Risk-Free Rate
	double T;		// Maturity Time
	double S;		// Underlying Asset Price
	double sigma;	//Volatility of underlying asset


public:
	VanillaOption();
	
	VanillaOption(const double& _K, const double& _r, const double& _T, const double& _S, const double & _sigma);

	VanillaOption(const VanillaOption& rhs); // Copy

	VanillaOption& operator= (const VanillaOption& rhs);

	virtual ~VanillaOption();


	double getK() const;
	double getr() const;
	double getT() const;
	double getS() const;
	double getSigma() const;

	double calc_call_price() const;
	double calc_put_price() const;


};

