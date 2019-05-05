#include "AsteroBocal.hpp"

AsteroBocal::AsteroBocal() : _name("AsteroBocal"){
	return ;
};

AsteroBocal::~AsteroBocal() {
	return ;
};

AsteroBocal::AsteroBocal(AsteroBocal & other){
	*this = other;
	return ;
};

AsteroBocal&	AsteroBocal::operator=(AsteroBocal const & other){
	(void)other;
	return *this;
};


std::string AsteroBocal::beMined(IMiningLaser * laser) const{
	(void)laser;
	return "Flavium";
};

std::string AsteroBocal::beMined(DeepCoreMiner * laser) const{
	(void)laser;
	return "Thorite";
};

std::string AsteroBocal::getName() const{
	return this->_name;
};
