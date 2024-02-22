#include <iostream>

enum DaysOfWeek {Sun, Mon, Tues, Wed, Thurs, Fri, Sat};

struct Date
{
	Date():day(1), month(1), year(2024){}

	int day;
	int month;
	int year;
};

void print_date(Date ob)
{
	std::cout << ob.day << "/" << ob.month << "/" << ob.year << std::endl;
}

int main()
{
	Date obj;
	print_date(obj);
}
