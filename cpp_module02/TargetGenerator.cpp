#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}


TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget*>::iterator it = _targetGenerators.begin();
	while (it != _targetGenerators.end())
	{
		delete it->second;
		++it;
	}
	_targetGenerators.clear();
}

void TargetGenerator::learnTargetType(ATarget* const&target)
{
	std::map<std::string, ATarget*>::iterator it = _targetGenerators.find(target->getType());
	if (it != _targetGenerators.end())
	{
		delete it->second;
	}
	_targetGenerators[target->getType()]= target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &nameOfTarget)
{
	std::map<std::string, ATarget*>::iterator it = _targetGenerators.find(nameOfTarget);
	if (it != _targetGenerators.end())
	{
		delete it->second;
		_targetGenerators.erase(it);
	}
}
ATarget* TargetGenerator::createTarget(std::string const &nameOfTarget)
{
	std::map<std::string, ATarget*>::iterator it = _targetGenerators.find(nameOfTarget);
	if (it != _targetGenerators.end())
		return it->second->clone();
	return NULL;
}