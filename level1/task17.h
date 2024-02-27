#include <iostream>

class Shape
{
	public:
                virtual double area() 
		{
			if(kox <0)
			{
				throw kox;
			}
			return kox;
		}

                virtual ~Shape(){}

	private:
		float kox;
};


class Circle:public Shape
{

        public:
		Circle():is_default(true)
		{}
		Circle(float a):radius(a)
		{}

                double area()
                {
			if(radius < 0 || is_default == true)
			{
				throw radius;
			}
                        return radius * radius * 3.14;
                }

        private:
                float radius;
		bool is_default = false;
};



class Rectangle:public Shape
{
        public:
		Rectangle():is_default(true)
		{}
		Rectangle(float a, float b):lenght(a)
					    ,width(b)
		{}

                double area() override
                {
			if(lenght < 0 || width < 0 || is_default == true)
			{
				throw lenght;	
			}
                        return lenght * width;
		}

        private:
                double lenght;
                double width;
		bool is_default = false;
};
