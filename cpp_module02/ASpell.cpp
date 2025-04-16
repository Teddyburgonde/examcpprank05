#include "ASpell.hpp"


ASpell::ASpell(std::string name, std::string effects): _name(name), _effects(effects)
{

}

ASpell::~ASpell(){}


ASpell::ASpell(ASpell const& cpy)
{
	_name = cpy._name;
	_effects = cpy._effects;
}
ASpell &ASpell::operator=(ASpell const& rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_effects = rhs._effects;
	}
	return (*this);
}

std::string const& ASpell::getName() const
{
	return _name;
}



std::string const& ASpell::getEffects() const
{
	return _effects;
}

void ASpell::launch(ATarget const& atarget) const
{
	atarget.getHitBySpell(*this);
}

