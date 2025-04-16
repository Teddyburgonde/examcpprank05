#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook()
{
	std::map<std::string, ASpell*>::iterator it = _spellbooks.begin();
	while (it != _spellbooks.end())
	{
		delete it->second;
		++it;
	}
	_spellbooks.clear();
}

void SpellBook::learnSpell(ASpell* const& aspell)
{
	if (aspell)
	{
		std::map<std::string, ASpell*>::iterator it = _spellbooks.find(aspell->getName());
		if (it != _spellbooks.end())
		{
			delete it->second;
		}
		_spellbooks[aspell->getName()]= aspell->clone();
	}
}

void SpellBook::forgetSpell(std::string const &nameOfSpell)
{
	std::map<std::string, ASpell*>::iterator it = _spellbooks.find(nameOfSpell);
	if (it != _spellbooks.end())
	{
		delete it->second;
		_spellbooks.erase(it);
	}

}

ASpell* SpellBook::createSpell(std::string const &nameOfSpell)
{
	std::map<std::string, ASpell*>::iterator it = _spellbooks.find(nameOfSpell);
	if (it != _spellbooks.end())
		return it->second->clone();
	return NULL;
}

