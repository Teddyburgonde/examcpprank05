#include "Warlock.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"


Warlock::Warlock(std::string name, std::string title) :_name(name), _title(title)
{
	std::cout <<_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const & Warlock::getName() const
{
	return (_name);
}

std::string const & Warlock::getTitle() const
{
	return (_title);
}


void Warlock::setTitle(std::string const &title)
{
	_title = title;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am "<< _name << ", " << _title << "!" << std::endl;
}

void  Warlock::learnSpell(ASpell* const &spell)
{
	_speelbook.learnSpell(spell);
	// if (spell)
	// {
	// 	spell->getName();
	// 	if (_spells.find(spell->getName()) != _spells.end())
	// 		delete _spells[spell->getName()];
	// 	_spells[spell->getName()] = spell->clone();
	// }
}

void Warlock::forgetSpell(std::string const &nameOfSort)
{
	_speelbook.forgetSpell(nameOfSort);
	// std::map<std::string, ASpell*>::iterator it = _spells.find(nameOfSort);
	// if (it != _spells.end())
	// {
	// 	delete it->second;
	// 	_spells.erase(it);
	// }
}

void Warlock::launchSpell(std::string const &nameOfSort, ATarget const & target)
{
	ASpell *spell = _speelbook.createSpell(nameOfSort);
	if (spell)
		spell->launch(target);
	// std::map<std::string, ASpell*>::iterator it = _spells.find(nameOfSort);
	// if (it != _spells.end())
	// {
	// 	it->second->launch(target);
	// } 
}

