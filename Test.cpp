//
// Created by 97252 on 4/2/2022.
//
#include "Matrix.hpp"
#include "vector"
#include "doctest.h"

using namespace std;
using namespace zich;


TEST_CASE ("SMALL ") {}

TEST_CASE ("Arithmetic operator ") {
    bool test;
    vector<double> v1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix matrix(v1, 3, 3);

    // self + self
    vector<double> v2 = {2, 0, 0, 0, 2, 0, 0, 0, 2};
    Matrix matrix2(v2, 3, 3);
    test = (matrix + matrix) == matrix2;
            CHECK(test == true);
    test = (matrix + matrix) != matrix;
            CHECK(test == true);


    //self - self
    vector<double> v0 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    Matrix matrix0(v0, 3, 3);
    test = (matrix - matrix) == matrix0;
            CHECK(test == true);
    test = (matrix - matrix2) != matrix0;
            CHECK(test == true);



    //++

    //--

    //+=

    //-=

    //A*B


    //const * A
    test = (2 * matrix) == matrix2;
            CHECK(test == true);
    //-A

}

TEST_CASE ("COMPERE OPERATOR ") {

    vector<double> v1 = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix matrix(v1, 3, 3);

    // <
            CHECK_EQ(matrix < (matrix + matrix), true);
            CHECK_EQ(matrix < (matrix - matrix), false);
            CHECK_EQ(matrix < (++matrix), true);


    vector<double> v2 = {2, 0, 0, 0, 2, 0, 0, 0, 2};
    Matrix matrix2(v2, 3, 3);
    // <=
            CHECK_EQ(matrix2 <= (matrix + matrix), true);
            CHECK_EQ(matrix <= (matrix2 - matrix), true);
            CHECK_EQ(matrix <= (matrix * matrix), true);

    // >
    vector<double> v0 = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    Matrix matrix0(v0, 3, 3);
            CHECK_EQ(matrix2 > (matrix0), true);
            CHECK_EQ(matrix2 > (matrix + matrix0), true);
            CHECK_EQ(matrix > (matrix * matrix0), true);
    matrix = -matrix;
            CHECK_EQ(matrix0 > (matrix), true);

    // >=
    for (int i = 1; i < 15; ++i) {
        matrix = -i * matrix;
        if (i % 2 == 0) {
                    CHECK_EQ(matrix0 >= (matrix), true);
        } else {
                    CHECK_EQ(matrix0 <= (matrix), true);
        }
    }




//CHECK_UNARY

}


TEST_CASE ("Power") {
    vector<double> v2 = {2, 0, 0, 0, 2, 0, 0, 0, 2};
    Matrix matrix2(v2, 3, 3);
    // A * A  + A
            CHECK_EQ((matrix2 * matrix2) + matrix2 >= matrix2, true);

    // A * A  * A
    bool test = ((matrix2 * matrix2) * matrix2) == 4 * matrix2;
            CHECK_EQ(test, true);
    //(A - A) + ( B * A )

    //   (A - A) + ( C * A ) THROW

}
//
//TEST_CASE ("rando ") {
//
//    // random
//    // all the oprator
//
//
//
//
//
//}

TEST_CASE ("CHECK_THROWS") {
    vector<double> v2 = {2, 0, 0, 0, 2, 0, 0, 0, 2};
    Matrix matrix2(v2, 3, 3);

    vector<double> v3 = {2, 0, 0, 0, 2, 0, 0, 0, 2, 1, 3, 0};
    Matrix matrix3(v3, 4, 3);

    CHECK_THROWS(matrix2 + matrix3);
    CHECK_THROWS(matrix2 - matrix3);


}

