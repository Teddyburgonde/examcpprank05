#pragma once

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	public:
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
		std::string const & getName() const;
		std::string const & getEffects() const;

	protected:
		ASpell();
		ASpell(ASpell const &cpy);
		ASpell &operator=(ASpell const &rhs);
		std::string _name;
		std::string _effects;
		virtual ASpell* clone() const = 0;
		void launch(ATarget const &target) const;
};