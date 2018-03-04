//#include <gsl/gsl>     // Directly including gsl/gsl results in warnings from GSL code.
#include "gsl_wrapper.h" // Including gsl/gsl through gsl_wrapper.h disables warnings from GSL code.

int main()
{
	const int integer = 1;
	const size_t size = gsl::narrow<size_t>(integer);
}