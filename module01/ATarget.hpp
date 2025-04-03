#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	
	public:
		ATarget();
		ATarget(ATarget const &cpy);
		virtual ~ATarget();
		ATarget &operator=(ATarget const &rhs);
		ATarget(std::string type);
		std::string const &getType() const;
		virtual ATarget * clone() const = 0;
		void getHitBySpell(ASpell const & spell) const;

	protected:
		std::string _type;
};