/*
 * bigint: a cpp header file for
 *		   numbers of arbitrary
 *		   length.
 *
 * Creator: @shardic1
 */

#ifndef BIG_INT
#define BIG_INT

#include <string>
#include <cmath>
#include <type_traits>

/* main class definition */
class bigint
{

public:

	/* initial number as a string */
	std::string n = "";

	/* constructors */

	// default constructor with initial value as 0
	bigint()
	{
		this -> n = "0";
	}

	//constructor for all data types passed
	template <typename T>
	bigint(T a)
	{
		// check if passed argument is a float
		if(std::is_same<T, float>::value or std::is_same<T, double>::value)
		{
			this -> n = std::to_string((long long) a);
		}
		else
		{
			this -> n = std::to_string(a);
		}
	}

	// constructor for initialising 'n' with a mod b (a % b)
	template <typename T>
	bigint(T a, T b)
	{
		T c = a % b;
		this -> n = std::to_string(c);
	}
};

#endif