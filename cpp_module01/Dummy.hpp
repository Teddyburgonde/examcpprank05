#pragma once


#include "ATarget.hpp"

class Dummy: public ATarget
{
	public:
		Dummy();
		Dummy& operator=(Dummy const& rhs);
		Dummy(Dummy const &cpy);
		virtual ~Dummy();
		ATarget * clone() const;
};
