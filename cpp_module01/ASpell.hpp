#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell 
{
	public:
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
		ASpell &operator=(ASpell const& rhs);
		ASpell(ASpell const& cpy);
		std::string const& getName() const;
		std::string const& getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(ATarget const& atarget) const;

	protected:
		ASpell();
		std::string _name;
		std::string _effects;

};