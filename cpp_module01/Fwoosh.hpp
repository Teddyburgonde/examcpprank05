#pragma once

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public :
		Fwoosh();
		Fwoosh(Fwoosh const &cpy);
		virtual ~Fwoosh();
		Fwoosh &operator=(Fwoosh const &rhs);
		ASpell* clone() const;

};