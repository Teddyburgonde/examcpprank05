#include "Fwoosh.hpp"


Fwoosh::Fwoosh() :ASpell("Fwoosh", "fwooshed")
{

}
Fwoosh::Fwoosh(Fwoosh const &cpy) :ASpell(cpy){}

Fwoosh::~Fwoosh(){}

Fwoosh &Fwoosh::operator=(Fwoosh const &rhs)
{
	if (this != &rhs)
	{
		ASpell::operator=(rhs);
	}
	return (*this);
}


ASpell* Fwoosh::clone() const
{
	return new Fwoosh(*this);
}

