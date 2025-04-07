#pragma once
#include <map>
#include "ASpell.hpp"

class SpellBook
{
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string const &spell);
		ASpell* createSpell(std::string const &spell);


	private:
		SpellBook(SpellBook const &cpy);
		SpellBook &operator=(SpellBook const &rhs);
		std::map<std::string, ASpell* >_map;
};