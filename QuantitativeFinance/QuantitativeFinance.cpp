// QuantitativeFinance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//#include "QSMatrix.cpp"
#include <iostream>
#include <algorithm>
#include <Eigen/Dense>
#include "BlackScholes.h"

using namespace std;




int main()
{
	int num_sims = 10000000;
	double S = 100.0;	// Option Price
	double K = 100.0;	// Strike Price
	double r = 0.05;	// interest rate
	double v = 0.2;		// 20% volatility
	double T = 1.0;		// 1 year til expiry
	double delta_S = 0.001;	 // Option price increment

	//double call = BlackScholes::monte_carlo_call_price(num_sims, S, K, r, v, T);
	//double put = BlackScholes::monte_carlo_put_price(num_sims, S, K, r, v, T);

	//double call_delta_f = BlackScholes::call_delta_fdm(S, K, r, v, T, delta_S);
	//double call_gamma_f = BlackScholes::call_gamma_fdm(S, K, r, v, T, delta_S);

	double call_delta_m = BlackScholes::monte_carlo_call_delta(num_sims, S, K, r, v, T, delta_S);
	double call_gamma_m = BlackScholes::monte_carlo_call_gamma(num_sims, S, K, r, v, T, delta_S);

	cout << endl << "Call Delta: " << call_delta_m << endl << endl;
	cout << "Call Gamma: " << call_gamma_m;



	cin.get();
	return 0;
}

