#pragma once

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
	public:
		TargetGenerator();
		~TargetGenerator();
		TargetGenerator &operator=(TargetGenerator const &rhs);
		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &type);
		ATarget* createTarget(std::string const &type);


	private:
		std::map<std::string , ATarget*> _targets;
		TargetGenerator(TargetGenerator const &cpy);


};