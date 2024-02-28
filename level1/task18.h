#include <iostream>

template <typename T>
class Shape
{
	public:
		virtual T area() const = 0;
};

template <class T>
class Circle:public Shape<T>
{
	public:
		Circle(T rad):radius(rad){}
		T area() const
		{
			return 3.14 * radius * radius;
		}

	private:
		T radius;
};

template <typename T>
class Rectangle:public Shape<T>
{
	public:
		Rectangle(T a, T b):lenght(a)
				    ,width(b){}
		T area() const
		{
			return lenght * width;
		}

	private:
		T lenght;
		T width;
};

