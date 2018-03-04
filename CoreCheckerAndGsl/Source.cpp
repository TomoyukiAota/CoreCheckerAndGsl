#include <gsl/gsl>
//#include "gsl_wrapper.h"

int main()
{
	const int integer = 1;
	const size_t size = gsl::narrow<size_t>(integer);
}