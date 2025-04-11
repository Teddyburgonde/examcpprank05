#include "SpellBook.hpp"


SpellBook::SpellBook(){}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell*>::iterator it = _map.begin();
	while (it != _map.end())
	{
		delete it->second;
		++it;
	}
	_map.clear();
}


void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
	{
		std::string name = spell->getName();
		std::map<std::string, ASpell*>::iterator it = _map.find(name);
		if (it != _map.end())
		{
			delete it->second;
		}
		_map[name]= spell->clone();
	}
	
}
void SpellBook::forgetSpell(std::string const &spell)
{
	std::map<std::string, ASpell*>::iterator it = _map.find(spell);
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
	{
		return it->second->clone();
	}
	return NULL;
}

