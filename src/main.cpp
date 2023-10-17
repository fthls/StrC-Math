#include "headers/Mat2.h"

int main()
{
    Vec2 a(-1, 2);
    Mat2 m1(Vec2(1, 2), Vec2(2, 1));
    Mat2 m2(Vec2(1, 1), Vec2(-1, 3));
    Mat2 final = m1 * m2;
    final.Print(final);
}