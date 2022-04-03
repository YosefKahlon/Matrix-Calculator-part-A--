//
// Created by 97252 on 4/1/2022.
//


#include "Matrix.hpp"
#include "vector"
#include "stdexcept"

using namespace std;
using namespace zich;

// todo throw  exp , comper , test , unary , mulltiply , minus , plus


//c - tor
Matrix::Matrix(const std::vector<double> &matrix, int n, int m) {
    this->matrix = matrix;
    this->row = n;
    this->col = m;
}


/**
 *  regular matrix A + matrix B
 */
Matrix Matrix::operator+(const Matrix &other) {
    if (this->row != other.row || this->col != other.col) {
        throw invalid_argument("Matrix must have the same size !!");
    }
    int length = this->col * this->row;
    for (int i = 0; i < length; ++i) {
        this->matrix[(unsigned long) i] = this->matrix[(unsigned long) i] + other.matrix[(unsigned long) i];
    }
    return Matrix(this->matrix, this->row, this->col);
}

/**
 *
 */
Matrix Matrix::operator+=(const Matrix &other) {
    if (this->row != other.row || this->col != other.col) {
        throw invalid_argument("Matrix must have the same size !!");
    }
    for (int i = 0; i < this->row; i++) {
        for (int j = 0; j < this->col; j++) {
            int index = (unsigned int) (this->col * i + j);
            this->matrix.at(index) += other.matrix.at(index);
        }
    }
    return Matrix(this->matrix, this->row, this->col);
}

/**
 * In this method every index in the matrix increasing by  1 .
 */
Matrix Matrix::operator++() {
    for (int i = 0; i < this->row; i++) {
        for (int j = 0; j < this->col; j++) {
            int index = (unsigned int) (this->col * i + j);
            this->matrix.at(index) += 1;
        }
    }
    return Matrix(this->matrix, this->row, this->col);

}

/**
 *In this method we implication the operator minus between two matrix .
 */
Matrix Matrix::operator-(const Matrix &other) {
    if (this->row != other.row || this->col != other.col) {
        throw invalid_argument("Matrix must have the same size !!");
    }
    for (int i = 0; i < this->row; i++) {
        for (int j = 0; j < this->col; j++) {
            int index = (unsigned int) (this->col * i + j);
            this->matrix.at(index) = this->matrix.at(index) - other.matrix.at(index);
        }
    }
    return Matrix(this->matrix, this->row, this->col);
}

/**
 *In this method every index in the  matrix decreasing by  1 .
 */
Matrix Matrix::operator--() {
    for (int i = 0; i < this->row; i++) {
        for (int j = 0; j < this->col; j++) {
            int index = (unsigned int) (this->col * i + j);
            this->matrix.at(index) -= 1;
        }
    }
    return Matrix(this->matrix, this->row, this->col);
}

/**
 * In this method we implication the operator -=
 * for matrix .
 * every index in our matrix decreasing the same index from matrix other .
 */
Matrix Matrix::operator-=(const Matrix &other) {
    for (int i = 0; i < this->row; i++) {
        for (int j = 0; j < this->col; j++) {
            int index = (unsigned int) (this->col * i + j);
            this->matrix.at(index) -= 1;
        }
    }
    return Matrix(this->matrix, this->row, this->col);

}


//------------------Six ratio operators(<,>,==,!= ,>= , <= )---------------------------
bool Matrix::operator<(const Matrix &other) {
    if (this->row != other.row || this->col != other.col) {
        throw invalid_argument("Matrix must have the same size !!");
    }

    return (check_sum(this->matrix)) < (check_sum(other.matrix));
}

bool Matrix::operator>(const Matrix &other) {
    if (this->row != other.row || this->col != other.col) {
        throw invalid_argument("Matrix must have the same size !!");
    }
    return (check_sum(this->matrix)) > (check_sum(other.matrix));
}

bool Matrix::operator==(const Matrix &other) {
    if (this->row != other.row || this->col != other.col) {
        throw invalid_argument("Matrix must have the same size !!");
    }
    for (int i = 0; i < this->row; ++i) {
        for (int j = 0; j < this->col; ++j) {
            int index = (unsigned int) (this->col * i + j);
            if (this->matrix[index] != other.matrix[index]) {
                return false;
            }
        }
    }
    return true;
}

bool Matrix::operator!=(const Matrix &other) {
    if (this->row != other.row || this->col != other.col) {
        throw invalid_argument("Matrix must have the same size !!");
    }
    for (int i = 0; i < this->row; ++i) {
        for (int j = 0; j < this->col; ++j) {
            int index = (unsigned int) (this->col * i + j);
            if (this->matrix[index] == other.matrix[index]) {
                return false;
            }
        }
    }
    return true;
}

bool Matrix::operator>=(const Matrix &other) {
    if (this->row != other.row || this->col != other.col) {
        throw invalid_argument("Matrix must have the same size !!");
    }
    return (check_sum(this->matrix)) >= (check_sum(other.matrix));
}

bool Matrix::operator<=(const Matrix &other) {
    if (this->row != other.row || this->col != other.col) {
        throw invalid_argument("Matrix must have the same size !!");
    }
    return (check_sum(this->matrix)) <= (check_sum(other.matrix));
}


Matrix Matrix::operator*(const Matrix &other) {
    if (this->row != other.row || this->col != other.col) {
        throw invalid_argument("row or col no equal to real");
    }

    return Matrix(this->matrix, this->row, this->col);

}


Matrix zich::operator*(double num, Matrix &other) {
    for (int i = 0; i < other.row; i++) {
        for (int j = 0; j < other.col; ++j) {
            other.matrix.at((unsigned long) (other.col * i + j)) =
                    num * other.matrix.at((unsigned long) (other.col * i + j));
        }

    }
    return Matrix(other.matrix, other.row, other.col);
}


Matrix zich::operator-(Matrix &matrix1) {
    if (matrix1.row != matrix1.col) {
        throw invalid_argument("row or col no equal to real");
    }

    return -1 * matrix1;
}


// -------------------- output --------------------
ostream &zich::operator<<(ostream &os, const Matrix &matrix1) {
    for (int i = 0; i < matrix1.row; ++i) {
        os << "[ ";
        for (int j = 0; j < matrix1.col; ++j) {
            unsigned int index = (unsigned int) (matrix1.col * i + j);
            os << matrix1.matrix.at(index) << " ";
        }
        os << "]\n";
    }


    return os;
}

iostream &zich::operator>>(iostream &os, const Matrix &matrix1) {
    return os;
}

Matrix zich::operator*=(Matrix &other, double num) {
    return Matrix(other.matrix, 0, 0);
}

double Matrix::check_sum(vector<double> vector1) {
    double counter = 0;
    for (int i = 0; i < vector1.size(); i++) {
        counter += vector1.at(i);
    }
    return counter;
}



