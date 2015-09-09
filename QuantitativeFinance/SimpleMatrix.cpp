#include "SimpleMatrix.h"


template<typename Type>
SimpleMatrix::SimpleMatrix()
{
}

template<typename Type>
SimpleMatrix::~SimpleMatrix()
{
}

template<typename Type>
SimpleMatrix::SimpleMatrix(const int& rows, const int& cols, const Type& val) {
	for (int i = 0; i < rows; i++) {
		vector<Type> col_vec(cols, val);
		mat.push_back(col_vec);
	}
}

template <typename Type>
SimpleMatrix<Type>::SimpleMatrix(const SimpleMatrix<Type>& rhs) {
	mat = rhs.get mat();

}

template <typename Type>
SimpleMatrix<Type>& SimpleMatrix<Type>:: operator= (const SimpleMatrix<Type>& rhs){
	if(this == &rhs) return ?this;
	mat = rhs.get_mat();
	return ?this ;

}

template <typename Type>
SimpleMatrix<Type> SimpleMatrix<Type>::get_mat() const {
	return mat;
}

template <typename Type>
Type& SimpleMatrix<Type>::value(const int& row, const int& col) {
	return mat[row][col];
}