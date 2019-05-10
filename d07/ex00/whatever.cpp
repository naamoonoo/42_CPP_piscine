#include <iostream>

template <typename T>
void	swap(T * a, T * b)
{
	T tmp = *a;
	*a = *b;
	*b = tmp;
}

template <typename T>
T	min(const T & a, const T & b)
{
	return (a <= b ? a : b);
}

template <typename T>
T	max(const T & a, const T & b)
{
	return (a > b ? a : b);
}

template <typename T>
void test(T _a, T _b)
{
	T a = _a;
	T b = _b;
	std::cout << "a : " << a << "\tb : " << b << std::endl;
	::swap(&a, &b);
	std::cout << "a : " << a << "\tb : " << b << std::endl;
	std::cout << "min("<< a << ", " << b << ") : " << ::min(a, b) << std::endl;
	std::cout << "man("<< a << ", " << b << ") : " << ::max(a, b) << std::endl;
	std::cout << "------------------------------------" << std::endl;
}

int main()
{
	test(4, 5);
	test(12.23423, 5.2);
	test(0.4f, 315253.32f);
	test('a', 'z');
	test("abc", "abd");

	return (0);
}
