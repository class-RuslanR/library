#pragma once
#include <map>
#include <set>
#include "reader.h"
#include "book.h"

class Library_Methods
{
	std::multimap<Reader, std::multiset<Book>> library;
public:
	void CreateLibrary();
	void DisplayLibrary();
	void CreateReader(std::string& person) noexcept;
	void CreateBook(std::string& title) noexcept;
	void ShowReader();
	void ShowBook();
};
