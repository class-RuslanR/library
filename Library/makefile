Library : Library.o reader.o book.o lib_methods.o interface.o
	g++ Library.o reader.o book.o lib_methods.o interface.o -o Library
Library.o : Library.cpp reader.h book.h lib_methods.h interface.h
	g++ -c Library.cpp
reader.o : reader.cpp book.h lib_methods.h interface.h
	g++ -c reader.cpp
book.o : book.cpp reader.h lib_methods.h interface.h
	g++ -c book.cpp
lib_methods.o : lib_methods.cpp reader.h book.h interface.h
	g++ -c lib_methods.cpp
interface.o : interface.cpp reader.h book.h lib_methods.h 
	g++ -c interface.cpp