#pragma once
#include <vector>

using namespace std;

template <typename Type = double> class SimpleMatrix
{
	vector<vector<Type>> mat;

public:
	SimpleMatrix();
	~SimpleMatrix();

	SimpleMatrix(const int& rows, const int& cols, const Type& val);
	SimpleMatrix(const SimpleMatrix<Type>& _rhs);
	SimpleMatrix<Type>& operator= (const SimpleMatrix<Type>& _rhs);

	vector<vector<Type>> get_mat() const;
	Type& value(const int& row, const int& col);

};

