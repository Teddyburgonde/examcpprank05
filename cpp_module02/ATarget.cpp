#include "ATarget.hpp"


ATarget::ATarget(std::string type): _type(type)
{

}

ATarget::~ATarget(){}


ATarget::ATarget(ATarget const& cpy)
{
	_type = cpy._type;
}
ATarget &ATarget::operator=(ATarget const& rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

std::string const& ATarget::getType() const
{
	return _type;
}

void ATarget::getHitBySpell(ASpell const&aspell) const
{
	std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;  
}