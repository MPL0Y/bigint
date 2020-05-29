/*
 * bigint: a cpp header file for
 *		   numbers of arbitrary
 *		   length.
 *
 * Creator: @shardic1
 */

#ifndef BIG_INT
#define BIG_INT

#include <iostream>
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

	// constructor for all data types passed
	template <typename T>
	bigint(T a)
	{
		//constructor for bigint passed
		if(std::is_same<T, bigint>::value)
		{
			this -> n = a.n;
		}

		// check if passed argument is a float
		else if(std::is_same<T, float>::value or std::is_same<T, double>::value)
		{
			// type-caste to lose fractional part
			this -> n = std::to_string((long long) a);
		}

		// straight cast for integers
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

	/* overloading operators */

	friend std::ostream &operator << (std::ostream &output, const bigint &op)
	{
		output << op.n;
		return output;
	}

	void operator = (bigint &op)
	{
		this -> n = op.n;
	}

	bigint operator + (bigint &op)
	{
		bigint a, b;

		// check the longer string
		bool first_is_longer = false, both_are_equal = false;
		auto i = this -> n.begin(), j = op.n.begin();

		for(; i != this -> n.end(), j != op.n.end(); i++, j++);

		if(i == this -> n.end())
		{
			if(j == op.n.end())
			{
				both_are_equal = true;
			}

			// 'second being longer' case already initialised
		}

		else
		{
			first_is_longer = true;
		}

		// assign longer value to 'a'
		if(first_is_longer)
		{
			a.n = this -> n, b.n = op.n;
		}

		else
		{
			a.n = op.n, b.n = this -> n;
		}

		int carry = 0;
		auto a_itr = a.n.end();
		auto b_itr = b.n.end();

		do
		{
			a_itr -= 1;
			b_itr -= 1;

			int sum = (*a_itr - '0') + (*b_itr - '0') + carry;

			if(sum > 9)
			{
				int x = sum % 10;
				sum /= 10;
				carry = sum;
				sum = x;
			}

			else
			{
				carry = 0;
			}

			*a_itr = (char)('0' + sum);
			// std::cerr << *a_itr << '\n';

		} while(a_itr != a.n.begin() && b_itr != b.n.begin());

		// needs to be optimised for unnecessary carry checks
		if(first_is_longer)
		{
			do
			{
				a_itr -= 1;

				int sum = (*a_itr - '0') + carry;

				if(sum > 9)
				{
					int x = sum % 10;
					sum /= 10;
					carry = sum;
					sum = x;
				}

				// optimise here: break after this and copy 
				// all remaining values
				else
				{
					carry = 0;
				}

				*a_itr = (char)('0' + sum);

			} while(a_itr != a.n.begin());

		}

		// needs to be optimised for unnecessary carry checks
		else if(!both_are_equal)
		{
			do
			{
				b_itr -= 1;

				int sum = (*b_itr - '0') + carry;

				if(sum > 9)
				{
					int x = sum % 10;
					sum /= 10;
					carry = sum;
					sum = x;
				}

				// optimise here: break after this and copy 
				// all remaining values
				else
				{
					carry = 0;
				}

				*b_itr = (char)('0' + sum);

			} while(b_itr != b.n.begin());

		}

		else
		{
			// do nothing
		}

		std::cerr << a << '\n';
		return (bigint) a;
		
	}

};

// gg

#endif