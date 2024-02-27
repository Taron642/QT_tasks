#include <iostream>

class Shape
{
	public:
		virtual double area() = 0;

		virtual ~Shape(){}
};


class Circle:public Shape
{
	public:
		double area()
		{
			return radius * radius * 3.14;
		}

	private:
		float radius = 1;
};



class Rectangle:public Shape
{
	public:
		double area() override
		{
			return lenght * width;
		}

	private:
		double lenght = 2;
		double width = 1;
};



int main()
{
	Circle c;
	std::cout << c.area() << std::endl;

	Rectangle r;
	std::cout << r.area() << std::endl;
}
