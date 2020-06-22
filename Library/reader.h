#pragma once

class Reader
{
	std::string reader;
public:
	Reader() {};
	Reader(std::string person);
	std::string GetReader() const;
	bool operator< (const Reader& elem) const;
};
