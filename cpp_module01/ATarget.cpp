#include "ATarget.hpp"


ATarget::ATarget(std::string type) :_type(type)
{

}

ATarget::~ATarget()
{

}

std::string const & ATarget::getType() const
{
	return (_type);
}


ATarget::ATarget(ATarget const &cpy)
{
	_type = cpy._type;
}
ATarget &ATarget::operator=(ATarget const &rhs)
{
	if (this != &rhs)
		_type = rhs._type;
	return (*this);
}

void ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}