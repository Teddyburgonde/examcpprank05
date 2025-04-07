#include "Polymorph.hpp"


Polymorph::Polymorph():ASpell("Polymorph", "turned into a critter")
{}

Polymorph::~Polymorph(){}

Polymorph::Polymorph(Polymorph const& cpy):ASpell(cpy){}

Polymorph& Polymorph::operator=(Polymorph const &rhs)
{
	if (this != &rhs)
		ASpell::operator=(rhs);
	return (*this);
}

ASpell *Polymorph::clone() const
{
	return new Polymorph(*this);
}

