	#pragma once

	#include "ASpell.hpp"

	class Polymorph : public ASpell
	{
		public:
		Polymorph();
		~Polymorph();
		Polymorph(Polymorph const& cpy);
		Polymorph& operator=(Polymorph const &rhs);
		ASpell *clone() const;
	};