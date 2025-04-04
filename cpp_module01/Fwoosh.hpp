#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"

class Fwoosh : public ASpell{

	public:
		Fwoosh();
		virtual ~Fwoosh();

	protected:
		Fwoosh(Fwoosh const &cpy);
		Fwoosh &operator=(Fwoosh const &rhs);
		virtual ASpell* clone() const;
};