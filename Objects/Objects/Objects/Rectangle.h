#pragma once
class Rectangle
{
private:
	int _width;
	int _height;

public:
	~Rectangle();
	int getWidth()
	{
		return _width;
	}

	int getHeight()
	{
		return _height;
	}
	
	Rectangle()
	{
		this->_width = 789;
		this->_height = 897;
	}

	Rectangle(int w, int h)
	{
		this->_width = w;
		this->_height = h;
	}
};

Rectangle::~Rectangle()
{

}