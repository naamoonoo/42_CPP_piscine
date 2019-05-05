#include "StripMiner.hpp"

StripMiner::StripMiner() {
	return ;
};

StripMiner::~StripMiner() {
	return ;
};

StripMiner::StripMiner(StripMiner & other){
	*this = other;
	return ;
};

StripMiner&	StripMiner::operator=(StripMiner const & other){
	(void)other;
	return *this;
};

void StripMiner::mine(IAsteroid* asteroid){
	std::cout << "* strip deep ... got " << asteroid->beMined(this) << " ! *" << std::endl;
};
