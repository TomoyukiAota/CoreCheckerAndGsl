#include "gsl_wrapper.h" // Including gsl/gsl through gsl_wrapper.h disables warnings from GSL code.
//#include <gsl/gsl>     // Directly including gsl/gsl results in warnings from GSL code.

#include <vector>

int main()
{
    const int integer = 1;
    const size_t size = gsl::narrow<size_t>(integer);

    std::vector<int> vec{ 1, 2, 3, 4 };
    const gsl::span<int> s{ vec };
}
