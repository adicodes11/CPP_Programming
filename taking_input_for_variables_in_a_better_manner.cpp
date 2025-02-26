// One better way of implementing getInteger is to pass s_isFirstCall as a parameter. This allows the caller to choose which prompt will be printed:
// An even more reusable solution would be to change the bool parameter to std::string_view and let the caller pass in the text prompt that will be used!

#include <iostream>

// We'll define a symbolic constant with a nice name
constexpr bool g_firstCall { true };

int getInteger(bool bFirstCall)
{
	if (bFirstCall)
	{
		std::cout << "Enter an integer: ";
	}
	else
	{
		std::cout << "Enter another integer: ";
	}

	int i{};
	std::cin >> i;
	return i;
}

int main()
{
	int a{ getInteger(g_firstCall) };  // so that it's clearer what the argument represents here
	int b{ getInteger(!g_firstCall) };

	std::cout << a << " + " << b << " = " << (a + b) << '\n';

	return 0;
}