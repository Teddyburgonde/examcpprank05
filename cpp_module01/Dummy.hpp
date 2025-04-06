#pragma once

#include "ATarget.hpp"

class Dummy :public ATarget
{
	public:
		Dummy();
		virtual ~Dummy();
		Dummy(Dummy const &cpy);
		Dummy &operator=(Dummy const &rhs);
		ATarget* clone() const;
};