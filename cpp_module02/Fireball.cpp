#include "Fireball.hpp"

Fireball::Fireball():ASpell("Fireball", "burnt to a crisp")
{}
Fireball::~Fireball(){}

Fireball::Fireball(Fireball const& cpy):ASpell(cpy)
{}

Fireball &Fireball::operator=(Fireball const &rhs)
{
	if (this != &rhs)
		ASpell::operator=(rhs);
	return (*this);
}

ASpell* Fireball::clone() const
{
	return new Fireball(*this);
}
