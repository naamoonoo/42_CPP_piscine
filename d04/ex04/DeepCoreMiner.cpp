#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner() {
	return ;
};

DeepCoreMiner::~DeepCoreMiner() {
	return ;
};

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner & other){
	*this = other;
	return ;
};

DeepCoreMiner&	DeepCoreMiner::operator=(DeepCoreMiner const & other){
	(void)other;
	return *this;
};

void DeepCoreMiner::mine(IAsteroid* asteroid){
	std::cout << "* mining deep ... got " << asteroid->beMined(this) << " ! *" << std::endl;
};
