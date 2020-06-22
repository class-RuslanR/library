#include <iostream>
#include "reader.h"
#include "book.h"
#include "lib_methods.h"
#include "interface.h"

int main()
{
	Library_Methods library;
	library.CreateLibrary();
	Interface interface;
	bool interface_flag = true;
	do
	{
		interface_flag = interface.Menu(library);
	} while (interface_flag);
	
	return 0;
}
