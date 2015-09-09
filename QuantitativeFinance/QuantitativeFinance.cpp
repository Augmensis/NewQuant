// QuantitativeFinance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "QSMatrix.cpp"
#include <iostream>

#include <Eigen/Dense>

int main()
{
	Eigen::MatrixXd m(3, 3);

	m << 1, 2, 3, 4, 5, 6, 7, 8, 9;

	std::cout << m << std::endl;

	std::cin.get();
	return 0;
}

//static void testFunction() {
//	QSMatrix<double> mat1(10, 10, 1.0);
//	QSMatrix<double> mat2(10, 10, 2.0);
//
//	QSMatrix<double> mat3 = mat1 + mat2;
//
//	std::cout << "First matrix" << std::endl;
//	mat1.print();
//
//	std::cout << "Second matrix" << std::endl;
//	mat2.print();
//
//	std::cout << "Both added" << std::endl;
//	mat3.print();
//
//}