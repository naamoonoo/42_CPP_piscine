#include <iostream>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void * serialize( void )
{
	Data *data = new Data;
	std::string alphanumerical = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	int i;

	i = -1;
	while (++i < 8)
	{
		data->s1 += alphanumerical[std::rand() % alphanumerical.size()];
		data->s2 += alphanumerical[std::rand() % alphanumerical.size()];
	}
	data->n = std::rand() * (std::rand() % 2 ? 1 : -1);

	// for checking
	// std::cout << data->s1 << std::endl;
	// std::cout << data->n << std::endl;
	// std::cout << data->s2 << std::endl;
	return data;
};

Data * deserialize( void * raw ){
	Data *data = reinterpret_cast<Data *>(raw);
	return data;
};

int main()
{
	srand(time(0));
	void	*ser = serialize();
	Data	*res = deserialize(ser);
	std::cout << res->s1 << std::endl;
	std::cout << res->n << std::endl;
	std::cout << res->s2 << std::endl;

	delete res;
	return 0;
}
