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
		{
			delete _map[spell->getName()];
		}
		_map[spell->getName()] = spell->clone();
	}
}




// 		void forgetSpell(std::string const &spell);
// 		ASpell* createSpell(std::string const &spell);


// 	private:
// 		SpellBook(SpellBook const &cpy);
// 		SpellBook &operator=(SpellBook const &rhs);
// 		std::map<std::string, ASpell* >map;
// };