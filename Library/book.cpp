#include <string>
#include "book.h"

Book::Book(std::string book_name) : book(book_name)
{
}

std::string Book::GetBook() const
{
	return book;
}

bool Book::operator<(const Book& elem) const
{
	return book < elem.book;
}
