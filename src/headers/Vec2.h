#pragma once

#include <iostream>

class Vec2
{
private:
    
public:
    float x;
    float y;

    Vec2(const float _x, const float _y)
    {
        x = _x;
        y = _y;
    }
    ~Vec2()
    {

    }

    Vec2 operator +(const Vec2& other)
    {
        return Vec2(x + other.x, y + other.y);
    }

    Vec2 operator -(const Vec2& other)
    {
        return Vec2(x - other.x, y - other.y);
    }

    Vec2 operator *(const Vec2& other)
    {
        return Vec2(x * other.x, y * other.y);
    }

    Vec2 operator /(const Vec2& other)
    {
        return Vec2(x / other.x, y / other.y);
    }

    void Print(const char* end_arg){
        std::cout << x << ", " << y << end_arg;
    }

    friend std::ostream& operator<< (std::ostream& out, const Vec2& obj); 
    
};


std::ostream& operator <<(std::ostream &out, Vec2 const& data)
{
    out << data.x << ', ' << data.y;
    // and so on... 
    return out;
}