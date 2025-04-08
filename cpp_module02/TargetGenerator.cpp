#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){}


TargetGenerator::TargetGenerator(TargetGenerator const &src)
{
    (void)src;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &rhs)
{
    (void)rhs;
    return *this;
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	std::map<std::string , ATarget*>::iterator it;
	std::string type;
	
	
	if (target)
	{
		type = target->getType();
		it = _targets.find(type);
		if (it != _targets.end())
		{
			delete it->second;
		}
	_targets[type] = target->clone();
	}
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
	std::map<std::string , ATarget*>::iterator it;
	it = _targets.find(type);
	if (it != _targets.end())
	{
		delete it->second;
		_targets.erase(it);
	}
}

ATarget* TargetGenerator::createTarget(std::string const &type)
{
	std::map<std::string, ATarget*>::iterator it = _targets.find(type);
	if (it != _targets.end())
	{
		return it->second->clone();
	}
	return NULL;
}