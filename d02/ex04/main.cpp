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

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "error" << std::endl;
		return (0);
	}
	std::string a = av[1];
	EvalExpr eea(word_count(a));
	eea.make_expr(a);
	eea.getAnswer();

	// std::cout << a_r << " is real answer" << std::endl;
	// std::string a = "( 2 + 3 ) * 3";
	// float a_r = ( 2 + 3 ) * 3;
	// EvalExpr eea(word_count(a));
	// eea.make_expr(a);
	// std::cout << "expr is " << a << std::endl;
	// eea.getAnswer();
	// std::cout << " is my answer" << std::endl;
	// std::cout << a_r << " is real answer" << std::endl;

	// std::string b = "( 2 + 3 ) * ( 3.5 * ( 1 + 1 ) / 2 )";
	// float b_r = ( 2 + 3 ) * ( 3.5 * ( 1 + 1 ) / 2 );
	// EvalExpr eeb(word_count(b));
	// eeb.make_expr(b);
	// std::cout << "expr is " << b << std::endl;
	// eeb.getAnswer();
	// std::cout << " is my answer" << std::endl;
	// std::cout << b_r << " is real answer" << std::endl;

	// std::string c = "3 * 3 * ( 5 - 3 ) / ( 5 + 0.3 ) * ( 2 - 1 )";
	// float c_r = 3 * 3 * ( 5 - 3 ) / ( 5 + 0.3 ) * ( 2 - 1 );
	// EvalExpr eec(word_count(c));
	// eec.make_expr(c);
	// std::cout << "expr is " << c << std::endl;
	// eec.getAnswer();
	// std::cout << " is my answer" << std::endl;
	// std::cout << c_r << " is real answer" << std::endl;

	// std::string d = "( 18.18 + 3.03 ) * 2";
	// float d_r = ( 18.18 + 3.03 ) * 2;
	// EvalExpr eed(word_count(d));
	// eed.make_expr(d);
	// std::cout << "expr is " << d << std::endl;
	// eed.getAnswer();
	// std::cout << " is my answer" << std::endl;
	// std::cout << d_r << " is real answer" << std::endl;

	return 0;
}
