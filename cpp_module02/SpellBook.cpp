#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook()
{
	for (std::map<std::string, ASpell*>::iterator it = _map.begin(); it != _map.end(); ++it)
	{
		delete it->second;
	}
	_map.clear();
}

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		if (_map.find(spell->getName()) != _map.end())
			delete _map[spell->getName()];
		_map[spell->getName()] = spell->clone();
	}
}
void  SpellBook::forgetSpell(std::string const &nameOfSpell)
{
	std::map<std::string , ASpell*>::iterator it = _map.find(nameOfSpell);
	if (it != _map.end())
	{
		delete it->second;
		_map.erase(it);
	}
}


ASpell* SpellBook::createSpell(std::string const &spell)
{
	std::map<std::string, ASpell*>::iterator it = _map.find(spell);
	if (it != _map.end())
		return it->second->clone();
	return NULL;
}

