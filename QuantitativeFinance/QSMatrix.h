#pragma once
#include <vector>
using namespace std;

template <typename T>
class QSMatrix
{
	vector<vector<T>> mat;
	unsigned rows;
	unsigned cols;

public:
	virtual ~QSMatrix();
	QSMatrix(unsigned _rows, unsigned _cols, const T& _initial);
	QSMatrix(const QSMatrix<T>& rhs);

	QSMatrix<T>& operator= (const QSMatrix<T>& rhs);
	QSMatrix<T>	 operator+ (const QSMatrix<T>& rhs);
	QSMatrix<T>& operator+=(const QSMatrix<T>& rhs);
	QSMatrix<T>  operator- (const QSMatrix<T>& rhs);
	QSMatrix<T>& operator-=(const QSMatrix<T>& rhs);
	QSMatrix<T>  operator* (const QSMatrix<T>& rhs);
	QSMatrix<T>& operator*=(const QSMatrix<T>& rhs);
	QSMatrix<T>  transpose();

	QSMatrix<T> operator+(const T& rhs);
	QSMatrix<T> operator-(const T& rhs);
	QSMatrix<T> operator*(const T& rhs);
	QSMatrix<T> operator/(const T& rhs);

	vector<T> operator*(const vector<T>& rhs);
	vector<T> diag_vec();

	T& operator() (const unsigned& row, const unsigned& col);
	const T& operator() (const unsigned& row, const unsigned& col) const;

	unsigned get_rows() const;
	unsigned get_cols() const;
};
