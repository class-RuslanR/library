#pragma once

class Book
{
	std::string book;
public:
	Book() {};
	Book(std::string book_name);
	std::string GetBook() const;
	bool operator< (const Book& elem) const;;
};