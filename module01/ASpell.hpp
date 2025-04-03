#pragma once

#include <string>
#include <iostream>

class ASpell {
	
	public:
		ASpell();
		ASpell(ASpell const &cpy);
		virtual ~ASpell();
		ASpell &operator=(ASpell const &rhs);
		ASpell(std::string name, std::string effects);
		std::string const &getName() const;
		std::string const &getEffects() const;
		virtual ASpell * clone() const = 0;

	protected:
		std::string _name;
		std::string _effects;
};