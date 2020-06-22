#include <iostream>
#include <string>
#include "interface.h"

bool Interface::Menu(Library_Methods& lib)
{
	std::cout << "\n************Welcome to the Library**************" << std::endl;
	std::cout << "\n1) Show the library\n2) Show books\n3) Show a reader\n4) Enter a new book\n"
		<< "5) Enter a new reader\n6) Search and give a book\n7) Return a book\n8) Delete a reader\n"
		<< "9) Delete a book\n10) Clear the display\n11) Exit\n";
	do
	{
		std::cout << "Please type a number: ";
		std::cin >> key;
		if (key < beg || key > fin)
		{
			std::cerr << "Wrong number. Please enter the number from 1 to 11\n";
		}
	} while (key < beg || key > fin);
	std::string temp_name;
	std::string temp_title;
	switch (key)
	{
	case a:
		lib.DisplayLibrary();
		return true;
	case b:
		lib.ShowBook();
		return true;
	case c:
		lib.ShowReader();
		return true;
	case d:
		std::cout << "Type a title of new book: ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::getline(std::cin, temp_title);
		lib.CreateBook(temp_title);
		return true;
	case e:
		std::cout << "Type a name of new reader: ";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::getline(std::cin, temp_name);
		lib.CreateReader(temp_name);
		return true;
	case f:
		return true;
	case g:
		return true;
	case h:
		return true;
	case k:
		return true;
	case l:
		system("cls");
		return true;
	case m:
		std::cout << "Thank you for join. See you!" << std::endl;
		return false;
	default:
		return EXIT_FAILURE;
	}
}
