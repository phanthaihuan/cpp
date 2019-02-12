#include <iostream>

int compute_area(Rectangle the_rectangle)
{
    return the_rectangle._width * the_rectangle._height;
}

class Rectangle
{
public:
    int _width;
    int _height;

    Rectangle(w, h)
    {
        this._width = w;
        this._height = h;
    }
}

void main()
{
    Rectangle outer;
    Rectangle inner;

    Rectangle rectangle_a(3, 5);
    std::cout <<rectangle_a._width <<"\n" ;
    std::cout <<rectangle_a._height <<"\n";

    outer._width = 10;
    outer._height = 10;

    inner._width = 5;
    inner._height = 5;
}