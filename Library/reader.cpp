#include <iostream>
#include <string>
#include "reader.h"

Reader::Reader(std::string person) : reader(person)
{
}

std::string Reader::GetReader() const
{
	return reader;
}

bool Reader::operator<(const Reader& elem) const
{
	return reader < elem.reader;
}
