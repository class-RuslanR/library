#pragma once
#include "lib_methods.h"

class Interface
{
	std::uint32_t key;
	enum Keys {a = 1, b, c, d, e, f, g, h, k, l, m};
	const std::uint32_t beg = 1;
	const std::uint32_t fin = 11;
public:
	bool Menu(Library_Methods& lib);
};