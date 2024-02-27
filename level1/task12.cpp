#include <iostream>

class Book
{
	public:
		Book()
		:ISBN(0),author("Name")
		{}

		std::string get_author()const
		{return author;}
		long int get_ISBN()const
		{return ISBN;}

		void set(std::string a)
		{author = a;}
		void set(long m)
		{ISBN = m;}


	private:
		std::string author;
		long int ISBN;
};



int main()
{
	Book book1;
	book1.set("Abel");
	book1.set(123456789111213);
	std::cout << book1.get_author() << " " << book1.get_ISBN() << std::endl;
}
