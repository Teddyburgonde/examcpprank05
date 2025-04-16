#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"

class ATarget;
class TargetGenerator 
{
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget* const&target);
		void forgetTargetType(std::string const &nameOfTarget);
		ATarget* createTarget(std::string const &nameOfTarget);


		
		
	private:
		std::map<std::string, ATarget*> _targetGenerators;
		TargetGenerator &operator=(TargetGenerator const& rhs);
		TargetGenerator(TargetGenerator const& cpy);

};