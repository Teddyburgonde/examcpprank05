#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;
class SpellBook 
{
	public:
		~SpellBook();
		SpellBook();
		void learnSpell(ASpell* const& aspell);
		void forgetSpell(std::string const &nameOfSpell);
		ASpell* createSpell(std::string const &nameOfSpell);
		
	private:
		std::map<std::string, ASpell*> _spellbooks;
		SpellBook &operator=(SpellBook const& rhs);
		SpellBook(SpellBook const& cpy);

};