#include "BocalSteroid.hpp"

BocalSteroid::BocalSteroid() : _name("BocalSteroid"){
	return ;
};

BocalSteroid::~BocalSteroid() {
	return ;
};

BocalSteroid::BocalSteroid(BocalSteroid & other){
	*this = other;
	return ;
};

BocalSteroid&	BocalSteroid::operator=(BocalSteroid const & other){
	(void)other;
	return *this;
};


std::string BocalSteroid::beMined(IMiningLaser * laser) const{
	(void)laser;
	return "Krpite";
};

std::string BocalSteroid::beMined(DeepCoreMiner * laser) const{
	(void)laser;
	return "Zazium";
};

std::string BocalSteroid::getName() const{
	return this->_name;
};
