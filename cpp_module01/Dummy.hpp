#pragma once

#include <string>
#include <iostream>
#include "ATarget.hpp"

class Dummy : public ATarget{

	public:
		Dummy();
		virtual ~Dummy();

	protected:
		Dummy(Dummy const &cpy);
		Dummy &operator=(Dummy const &rhs);
		virtual ATarget* clone() const;
};