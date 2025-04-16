#pragma once
#include <iostream>
#include "ASpell.hpp"


class ASpell;
class ATarget 
{
	public:
		ATarget(std::string type);
		virtual ~ATarget();
		ATarget &operator=(ATarget const& rhs);
		ATarget(ATarget const& cpy);
		std::string const& getType() const;
		virtual ATarget* clone() const = 0;
		void getHitBySpell(ASpell const&aspell) const;


	protected:
		ATarget();
		std::string _type;
};