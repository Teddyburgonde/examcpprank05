#pragma once

#include "ASpell.hpp"
#include <string>
#include <iostream>

class ASpell;

class ATarget {
	public:
		ATarget(std::string title);
		virtual ~ATarget();
		std::string const & getType() const;
		void getHitBySpell(ASpell const & spell) const;
		virtual ATarget* clone() const = 0;
		
		protected:
		ATarget();
		ATarget(ATarget const &cpy);
		ATarget &operator=(ATarget const &rhs);
		std::string _type;
};