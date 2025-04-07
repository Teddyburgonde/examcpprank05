#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook 
{
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell*);
		void forgetSpell(std::string const &spell);
		ASpell* createSpell(std::string const &spell);
		
	private:	
		SpellBook(SpellBook const& cpy);
		SpellBook &operator=(SpellBook const &rhs);
		std::map<std::string, ASpell*> spells;
};