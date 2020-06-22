#include <iostream>
#include <string>
#include "lib_methods.h"

void Library_Methods::CreateLibrary()
{
	library.insert(std::make_pair(Reader("Ivanov"), std::multiset<Book>{Book("'Arch of Triumph'"),
		Book("'Italian book'")}));
	library.insert(std::make_pair(Reader("Sidorov"), std::multiset<Book>{Book("'Harry Potter'")}));
	library.insert(std::make_pair(Reader("Petrov"), std::multiset<Book>{Book("empty_shelf")}));
	library.insert(std::make_pair(Reader("free"), std::multiset<Book>{Book("'English book'"),
		Book("'English book'")}));
	library.insert(std::make_pair(Reader("free"), std::multiset<Book>{Book("'Russian book'"),
		Book("'Russian book'")}));
	library.insert(std::make_pair(Reader("free"), std::multiset<Book>{Book("'Italian book'")}));
}

void Library_Methods::DisplayLibrary()
{
	std::cout << "\t\tCurrent library:\n" << std::endl;
	for (const auto& i : library)
	{
		std::cout << i.first.GetReader() << "\t\t";
		for (auto& it : i.second)
		{
			std::cout << it.GetBook() << " ";
		}
		std::cout << std::endl;
	}
}

void Library_Methods::CreateReader(std::string& person) noexcept
{
	try
	{
		library.insert(std::make_pair(Reader(person), std::multiset<Book>{Book("empty_shelf")}));
	}
	catch (const std::exception& err)
	{
		std::cerr << "Error creating a reader." << std::endl;
		std::cerr << err.what() << std::endl;
	}
}

void Library_Methods::CreateBook(std::string& title) noexcept
{
	try
	{
		library.insert(std::make_pair(Reader("free"), std::multiset<Book>{(title)}));
	}
	catch (const std::exception& err)
	{
		std::cerr << "Error creating a book." << std::endl;
		std::cerr << err.what() << std::endl;
	}
}

void Library_Methods::ShowReader()
{
	std::cout << "\nAll readers: " << std::endl;
	std::string word_temp = "free";
	std::string name_enter;
	for (const auto& i : library)
	{
		if (i.first.GetReader() != word_temp)
		{
			std::cout << i.first.GetReader() << std::endl;
		}
	}
	std::cout << "Please enter the name of a reader: ";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, name_enter);
	auto it = library.find(name_enter);
	if (it != library.end())
	{
		for (const auto& i : it->second)
		{
			std::cout << i.GetBook() << std::endl;
		}
	}
}

void Library_Methods::ShowBook()
{
	std::cout << "\nAll books: " << std::endl;
	std::string word_temp = "empty_shelf";
	std::string name_enter;
	for (const auto& i : library)
	{
		for(auto& it : i.second)
		if (it.GetBook() != word_temp)
		{
			std::cout << it.GetBook();
		}
		std::cout << std::endl;
	}
}
