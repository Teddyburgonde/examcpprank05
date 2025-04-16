#pragma once
#include "ASpell.hpp"

class ASpell;
class Fireball : public ASpell
{
	public:
		Fireball();
		~Fireball();
		Fireball* clone() const;
};