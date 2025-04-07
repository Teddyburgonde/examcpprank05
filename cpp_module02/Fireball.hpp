#pragma once


#include "ASpell.hpp"

class Fireball :public ASpell
{
	public:
		Fireball();
		~Fireball();
		Fireball(Fireball const& cpy);
		Fireball &operator=(Fireball const &rhs);
		ASpell* clone() const;
};