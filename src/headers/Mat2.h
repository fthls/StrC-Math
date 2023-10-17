#pragma once

#include "Vec2.h"

class Mat2
{
private:
    /* data */
public:
    Vec2 ac;
    Vec2 bd;

    Mat2(const Vec2 _ac, const Vec2 _bd) : ac(_ac), bd(_bd)
    {

    }
    ~Mat2()
    {

    }

    friend Vec2 operator *(const Vec2& first, const Mat2& other);

    Mat2 operator *(const Mat2& other)
    {
        Mat2 first = *this;
        Vec2 v1 = (other.ac * first);
        Vec2 v2 = (other.bd * first);

        return Mat2(v1, v2);
    }

    void Print(Mat2 mat2)
    {
        std::cout << "[" << mat2.ac.x << " " << mat2.bd.x << "]\n" <<
        "[" << mat2.ac.y << " " << mat2.bd.y << "]" << std::endl;
    }
};

Vec2 operator *(const Vec2& first, const Mat2& other)
{
    return Vec2((other.ac.x * first.x) + (other.bd.x * first.y),
     (other.ac.y * first.x) + (other.bd.y * first.y) );
}