#include "FtStack.hpp"
#include "EvalExpr.hpp"

#include <sstream>



int	word_count(std::string str)
{
	int count;
	size_t idx;

	count = 0;
	idx = str.find(" ");
	while (idx != std::string::npos)
	{
		count++;
		idx = str.find(" ", idx + 1, 1);
	}
	return count + 1;
}



int main()
{
	// std::string
	std::string eval;
	eval = "( ( 3.28 + 34.32 ) * ( 26.33 / ( 5.2 + 32.53 ) )";
// 3.28
// 34.32
// +
// 26.33
// 5.2
// 32.53
// +
// /
// *
	// eval = "( A + B ) * C";
	// eval = "( a + b ) * ( c + d )";
	std::string tmp;
	std::stringstream ss;
	FtStack	stack;

	EvalExpr ee(word_count(eval));

	ee.make_expr(eval);

	int i = -1;
	while (!ee.getData(++i).empty())
		std::cout << ee.getData(i) << std::endl;



	return 0;
}
