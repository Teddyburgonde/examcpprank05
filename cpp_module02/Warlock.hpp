#pragma once

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock {
	public:
	Warlock(std::string name, std::string title);
	~Warlock();
	std::string const & getName() const;
	std::string const & getTitle() const;
	void setTitle(std::string const &title);
	void introduce() const;
	void learnSpell(ASpell* const &spell);
	void forgetSpell(std::string const &nameOfSort);
	void launchSpell(std::string const &nameOfSort, ATarget const & target);

	private:

		std::map<std::string , ASpell*> _spells;
		Warlock();
		Warlock(Warlock const &cpy);
		Warlock &operator=(Warlock const &rhs);
		std::string _name;
		std::string _title;
};