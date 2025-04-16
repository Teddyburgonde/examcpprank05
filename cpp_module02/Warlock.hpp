#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class SpellBook;
class ASpell;
class Warlock 
{
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		std::string const& getName() const;
		std::string const& getTitle() const;
		void setTitle(std::string const& title);
		void introduce() const;
		void learnSpell(ASpell* const&aspell);
		void forgetSpell(std::string const&nameOfSort);
		void launchSpell(std::string const&nameOfSort, ATarget const& target);
		
		
	private:
		SpellBook spellbook;
		std::map<std::string, ASpell*> _spells;
		Warlock &operator=(Warlock const& rhs);
		Warlock();
		Warlock(Warlock const& cpy);
		std::string _name;
		std::string _title;

};